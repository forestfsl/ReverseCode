// Copyright (c) 2013, Facebook, Inc.
// All rights reserved.
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//   * Neither the name Facebook nor the names of its contributors may be used to
//     endorse or promote products derived from this software without specific
//     prior written permission.
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "fishhook.h"
#include <stdio.h>

#include <dlfcn.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <mach-o/dyld.h>
#include <mach-o/loader.h>
#include <mach-o/nlist.h>

#ifdef __LP64__
typedef struct mach_header_64 mach_header_t;
typedef struct segment_command_64 segment_command_t;
typedef struct section_64 section_t;
typedef struct nlist_64 nlist_t;
#define LC_SEGMENT_ARCH_DEPENDENT LC_SEGMENT_64
#else
typedef struct mach_header mach_header_t;
typedef struct segment_command segment_command_t;
typedef struct section section_t;
typedef struct nlist nlist_t;
#define LC_SEGMENT_ARCH_DEPENDENT LC_SEGMENT
#endif

#ifndef SEG_DATA_CONST
#define SEG_DATA_CONST  "__DATA_CONST"
#endif

struct rebindings_entry {
  struct rebinding *rebindings;
  size_t rebindings_nel;
  struct rebindings_entry *next;
};

static struct rebindings_entry *_rebindings_head;


/*
 在prepend_rebindings 方法中，fishhook会维护这个结构:
 prepend_rebindings 用于rebindings_entry 结构的维护
 struct rebindings_entry **rebindings_head - 对应的是static 的_rebindings_head
 struct rebinding rebindings[] - 传入的方法符号数组
 size_t nel - 数组对应的元素数量
 */

static int prepend_rebindings(struct rebindings_entry **rebindings_head,
                              struct rebinding rebindings[],
                              size_t nel) {
    //声明rebindings_entry 一个指针，并为其分配空间
  struct rebindings_entry *new_entry = (struct rebindings_entry *) malloc(sizeof(struct rebindings_entry));
    //分配空间失败的容错处理
  if (!new_entry) {
    return -1;
  }
    //为链表中元素的rebindings 实力分配指定空间
  new_entry->rebindings = (struct rebinding *) malloc(sizeof(struct rebinding) * nel);
    //分配空间的容错处理
  if (!new_entry->rebindings) {
    free(new_entry);
    return -1;
  }
    //将rebindings 数组copy到new_entry -> rebindings 成员中
  memcpy(new_entry->rebindings, rebindings, sizeof(struct rebinding) * nel);
    //为new_entry -> rebindings_nel 赋值
  new_entry->rebindings_nel = nel;
    //为new_entry -> newx 赋值，维护链表结构
  new_entry->next = *rebindings_head;
    //移动head指针，指向表头
  *rebindings_head = new_entry;
  return 0;
}

static void perform_rebinding_with_section(struct rebindings_entry *rebindings,
                                           section_t *section,
                                           intptr_t slide,
                                           nlist_t *symtab,
                                           char *strtab,
                                           uint32_t *indirect_symtab) {
    //nl_symbol_ptr和la_symbol_ptrsection中的reserved1字段指明对应的indirect symbol table起始的index
  uint32_t *indirect_symbol_indices = indirect_symtab + section->reserved1; //section->reserved1 这个会用section->reserved1 * 每个元素的字节数量 = section->reserved1 * 4
    //slide+section->addr 就是符号对应的存放函数实现的数组也就是我相应的__nl_symbol_ptr和__la_symbol_ptr相应的函数指针都在这里面了，所以可以去寻找到函数的地址
  void **indirect_symbol_bindings = (void **)((uintptr_t)slide + section->addr);
    //遍历section里面的每一个符号
  for (uint i = 0; i < section->size / sizeof(void *); i++) {
      //找到符号在Indrect Symbol Table表中的值
      //读取indirect table中的数据
    uint32_t symtab_index = indirect_symbol_indices[i];
    if (symtab_index == INDIRECT_SYMBOL_ABS || symtab_index == INDIRECT_SYMBOL_LOCAL ||
        symtab_index == (INDIRECT_SYMBOL_LOCAL   | INDIRECT_SYMBOL_ABS)) {
      continue;
    }
      //以symtab_index作为下标，访问symbol table
      uint32_t strtab_offset = symtab[symtab_index].n_un.n_strx;
      //获取到symbol_name
      char *symbol_name = strtab + strtab_offset;
      //判断是否函数的名称是否有两个字符，为啥是两个，因为函数前面有个_，所以方法的名称最少要1个
      bool symbol_name_longer_than_1 = symbol_name[0] && symbol_name[1];
      //遍历最初的链表，来进行hook
      struct rebindings_entry *cur = rebindings;
      while (cur) {
          for (uint j = 0; j < cur->rebindings_nel; j++) {
              //这里if的条件就是判断从symbol_name[1]两个函数的名字是否都是一致的，以及判断两个
              if (symbol_name_longer_than_1 &&
                  strcmp(&symbol_name[1], cur->rebindings[j].name) == 0) {
                  //判断replaced的地址不为NULL以及我方法的实现和rebindings[j].replacement的方法不一致
                  if (cur->rebindings[j].replaced != NULL &&
                      indirect_symbol_bindings[i] != cur->rebindings[j].replacement) {
                      //让rebindings[j].replaced保存indirect_symbol_bindings[i]的函数地址
                      *(cur->rebindings[j].replaced) = indirect_symbol_bindings[i];
                  }
                  //将替换后的方法给原先的方法，也就是替换内容为自定义函数地址
                  indirect_symbol_bindings[i] = cur->rebindings[j].replacement;
                  goto symbol_loop;
        }
      }
      cur = cur->next;
    }
  symbol_loop:;
  }
}
//回调的最终就是这个函数！ 三个参数：要交换的数组  、 image的头 、 ASLR的偏移
static void rebind_symbols_for_image(struct rebindings_entry *rebindings,
                                     const struct mach_header *header,
                                     intptr_t slide) {
    
    /*dladdr() 可确定指定的address 是否位于构成进程的进址空间的其中一个加载模块（可执行库或共享库）内，如果某个地址位于在其上面映射加载模块的基址和为该加载模块映射的最高虚拟地址之间（包括两端），则认为该地址在加载模块的范围内。如果某个加载模块符合这个条件，则会搜索其动态符号表，以查找与指定的address 最接近的符号。最接近的符号是指其值等于，或最为接近但小于指定的address 的符号。
     */
    /*
     如果指定的address 不在其中一个加载模块的范围内，则返回0 ；且不修改Dl_info 结构的内容。否则，将返回一个非零值，同时设置Dl_info 结构的字段。
     如果在包含address 的加载模块内，找不到其值小于或等于address 的符号，则dli_sname 、dli_saddr 和dli_size字段将设置为0 ； dli_bind 字段设置为STB_LOCAL ， dli_type 字段设置为STT_NOTYPE 。
     */
    //这个dladdr函数就是在程序里面找header
  Dl_info info;
  if (dladdr(header, &info) == 0) {
    return;
  }
    //下面就是定义好几个变量，准备从MachO里面去找！
    // 声明几个查找量:
    // linkedit_segment, symtab_command, dysymtab_command
  segment_command_t *cur_seg_cmd;
  segment_command_t *linkedit_segment = NULL;
  struct symtab_command* symtab_cmd = NULL;
  struct dysymtab_command* dysymtab_cmd = NULL;
    //跳过header的大小，找loadCommand
    // 初始化游标
    // header = 0x100000000 - 二进制文件基址默认偏移
    // sizeof(mach_header_t) = 0x20 - Mach-O Header 部分
    // 首先需要跳过 Mach-O Header
  uintptr_t cur = (uintptr_t)header + sizeof(mach_header_t);
  for (uint i = 0; i < header->ncmds; i++, cur += cur_seg_cmd->cmdsize) {
      // 遍历每一个 Load Command，游标每一次偏移每个命令的 Command Size 大小
       // header -> ncmds: Load Command 加载命令数量
       // cur_seg_cmd -> cmdsize: Load 大小
    cur_seg_cmd = (segment_command_t *)cur;
          // Load Command 的类型是 LC_SEGMENT
    if (cur_seg_cmd->cmd == LC_SEGMENT_ARCH_DEPENDENT) {
          // 比对一下 Load Command 的 name 是否为 __LINKEDIT
      if (strcmp(cur_seg_cmd->segname, SEG_LINKEDIT) == 0) {
            // 检索到 __LINKEDIT
        linkedit_segment = cur_seg_cmd;
      }
        // 判断当前 Load Command 是否是 LC_SYMTAB 类型
        // LC_SEGMENT - 代表当前区域链接器信息
    } else if (cur_seg_cmd->cmd == LC_SYMTAB) {
           // 检索到 LC_SYMTAB
      symtab_cmd = (struct symtab_command*)cur_seg_cmd;
        // 判断当前 Load Command 是否是 LC_DYSYMTAB 类型
        // LC_DYSYMTAB - 代表动态链接器信息区域
    } else if (cur_seg_cmd->cmd == LC_DYSYMTAB) {
          // 检索到 LC_DYSYMTAB
      dysymtab_cmd = (struct dysymtab_command*)cur_seg_cmd;
    }
  }
   //如果刚才获取的，有一项为空就直接返回 // 容错处理
  if (!symtab_cmd || !dysymtab_cmd || !linkedit_segment ||
      !dysymtab_cmd->nindirectsyms) {
    return;
  }

  // Find base symbol/string table addresses
    // slide: ASLR 偏移量
       // vmaddr: SEG_LINKEDIT 的虚拟地址
       // fileoff: SEG_LINKEDIT 地址偏移
       // 式①：base = SEG_LINKEDIT真实地址 - SEG_LINKEDIT地址偏移
       // 式②：SEG_LINKEDIT真实地址 = SEG_LINKEDIT虚拟地址 + ASLR偏移量
       // 将②代入①：Base = SEG_LINKEDIT虚拟地址 + ASLR偏移量 - SEG_LINKEDIT地址偏移
    
//链接时程序的基址 = __LINKEDIT.VM_Address -__LINKEDIT.File_Offset + silde的改变值
  uintptr_t linkedit_base = (uintptr_t)slide + linkedit_segment->vmaddr - linkedit_segment->fileoff;
//    printf("地址:%p\n",linkedit_base);
    //符号表的地址 = 基址 + 符号表偏移量
  nlist_t *symtab = (nlist_t *)(linkedit_base + symtab_cmd->symoff);
     //字符串表的地址 = 基址 + 字符串表偏移量
  char *strtab = (char *)(linkedit_base + symtab_cmd->stroff);

  // Get indirect symbol table (array of uint32_t indices into symbol table)
    //动态符号表地址 = 基址 + 动态符号表偏移量
  uint32_t *indirect_symtab = (uint32_t *)(linkedit_base + dysymtab_cmd->indirectsymoff);

    // 归零游标，复用
  cur = (uintptr_t)header + sizeof(mach_header_t);
  for (uint i = 0; i < header->ncmds; i++, cur += cur_seg_cmd->cmdsize) {
    cur_seg_cmd = (segment_command_t *)cur;
       // Load Command 的类型是 LC_SEGMENT
    if (cur_seg_cmd->cmd == LC_SEGMENT_ARCH_DEPENDENT) {
           // 查询 Segment Name 过滤出 __DATA 或者 __DATA_CONST
      if (strcmp(cur_seg_cmd->segname, SEG_DATA) != 0 &&
          strcmp(cur_seg_cmd->segname, SEG_DATA_CONST) != 0) {
        continue;
      }
        
        // 遍历 Segment 中的 Section
        
      for (uint j = 0; j < cur_seg_cmd->nsects; j++) {
           // 取出 Section
        section_t *sect =
          (section_t *)(cur + sizeof(segment_command_t)) + j;
          //找懒加载表
          // flags & SECTION_TYPE 通过 SECTION_TYPE 掩码获取 flags 记录类型的 8 bit
                         // 如果 section 的类型为 S_LAZY_SYMBOL_POINTERS
                         // 这个类型代表 lazy symbol 指针 Section
        if ((sect->flags & SECTION_TYPE) == S_LAZY_SYMBOL_POINTERS) {
               // 进行 rebinding 重写操作
          perform_rebinding_with_section(rebindings, sect, slide, symtab, strtab, indirect_symtab);
        }
          //非懒加载表 // 这个类型代表 non-lazy symbol 指针 Section
        if ((sect->flags & SECTION_TYPE) == S_NON_LAZY_SYMBOL_POINTERS) {
          perform_rebinding_with_section(rebindings, sect, slide, symtab, strtab, indirect_symtab);
        }
      }
    }
  }
}

/*
 为什么传入的 _rebind_symbols_for_image 作为回调函数呢？
 extern void _dyld_register_func_for_add_image(void (*func)(const struct mach_header* mh, intptr_t vmaddr_slide))    __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);
 extern void _dyld_register_func_for_remove_image(void (*func)(const struct mach_header* mh, intptr_t vmaddr_slide)) __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);
 
 extern 关键字来告知编译器当调用方法的时候，请在其他模块中寻找该方法定义。并且在这两个方法的声明中，所注册方法的参数列表一定是 (const struct mach_header* mh, intptr_t vmaddr_slide)。
 */

/**
* _rebind_symbols_for_image 是 rebind_symbols_for_image 的一个入口方法
* 这个入口方法存在的意义是满足 _dyld_register_func_for_add_image 传入回调方法的格式
* header - Mach-O 头
* slide - intptr_t 持有指针
*/

static void _rebind_symbols_for_image(const struct mach_header *header,
                                      intptr_t slide) {
    rebind_symbols_for_image(_rebindings_head, header, slide);
}

int rebind_symbols_image(void *header,
                         intptr_t slide,
                         struct rebinding rebindings[],
                         size_t rebindings_nel) {
    struct rebindings_entry *rebindings_head = NULL;
    int retval = prepend_rebindings(&rebindings_head, rebindings, rebindings_nel);
    rebind_symbols_for_image(rebindings_head, (const struct mach_header *) header, slide);
    if (rebindings_head) {
      free(rebindings_head->rebindings);
    }
    free(rebindings_head);
    return retval;
}

/*
 rebind_symbols
 struct rebinding rebindings[] - rebinding 结构体数组
 size_t rebindings_nel -数组长度
 */
int rebind_symbols(struct rebinding rebindings[], size_t rebindings_nel) {
    //prepend_rebindings的函数会将整个 rebindings 数组添加到 _rebindings_head 这个链表的头部
    //Fishhook采用链表的方式来存储每一次调用rebind_symbols传入的参数，每次调用，就会在链表的头部插入一个节点，链表的头部是：_rebindings_head
    int retval = prepend_rebindings(&_rebindings_head, rebindings, rebindings_nel);
    //根据上面的prepend_rebinding来做判断，如果小于0的话，直接返回一个错误码回去
    if (retval < 0) {
    return retval;
  }
    //根据_rebindings_head->next是否为空判断是不是第一次调用，NULL则代表第一次调用。
  if (!_rebindings_head->next) {
      //第一次调用的话，调用_dyld_register_func_for_add_image注册监听方法.
      //已经被dyld加载的image会立刻进入回调。
      //之后的image会在dyld装载的时候触发回调。
//      _dyld_register_func_for_add_image 是什么？
      /*
       这里笔者查看了 Apple 官方的 dyld.h 头文件，其中对于 _dyld_register_func_for_add_image 有较为详细的说明（dyld.h）：
       dyld_register_func_for_add_image 这个方法当镜像 Image 被 load 或是 unload 的时候都会由 dyld 主动调用。当该方法被触发时，会为每个镜像触发其回调方法。之后则将其镜像与其回电函数进行绑定（但是未进行初始化）。使用 _dyld_register_func_for_add_image 注册的回调将在镜像中的 terminators 启动后被调用。
       */
    _dyld_register_func_for_add_image(_rebind_symbols_for_image);
  } else {
      //遍历已经加载的image，进行的hook
    uint32_t c = _dyld_image_count();
    for (uint32_t i = 0; i < c; i++) {
      _rebind_symbols_for_image(_dyld_get_image_header(i), _dyld_get_image_vmaddr_slide(i));
    }
  }
  return retval;
}
