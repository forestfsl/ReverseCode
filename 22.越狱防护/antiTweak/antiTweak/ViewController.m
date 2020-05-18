//
//  ViewController.m
//  antiTweak
//
//  Created by apple on 2020/5/13.
//  Copyright © 2020 fly. All rights reserved.
//

#import "ViewController.h"
#import <mach-o/loader.h>
#import <mach-o/dyld.h>

@interface ViewController ()

@end



#if __LP64__
#define macho_header               mach_header_64
#define LC_SEGMENT_COMMAND        LC_SEGMENT_64
#define LC_SEGMENT_COMMAND_WRONG LC_SEGMENT
#define LC_ENCRYPT_COMMAND        LC_ENCRYPTION_INFO
#define macho_segment_command    segment_command_64
#define macho_section            section_64
#else
#define macho_header               mach_header
#define LC_SEGMENT_COMMAND        LC_SEGMENT
#define LC_SEGMENT_COMMAND_WRONG LC_SEGMENT_64
#define LC_ENCRYPT_COMMAND        LC_ENCRYPTION_INFO_64
#define macho_segment_command    segment_command
#define macho_section            section
#endif


@implementation ViewController

+(void)load{
    //拿到可执行文件头
    const struct mach_header_64 * header = _dyld_get_image_header(0);//我自己？？
       if (hasRestrictedSegment(header)) {
           NSLog(@"防止Tweak注入状态！！");
       }else{
           NSLog(@"被修改了！！");//尽可能不要给黑客留下信号！！
           exit(0);//
       }
    
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

static bool hasRestrictedSegment(const struct macho_header* mh)
{
    const uint32_t cmd_count = mh->ncmds;
    const struct load_command* const cmds = (struct load_command*)(((char*)mh)+sizeof(struct macho_header));
    const struct load_command* cmd = cmds;
    for (uint32_t i = 0; i < cmd_count; ++i) {
        switch (cmd->cmd) {
            case LC_SEGMENT_COMMAND:
            {
                const struct macho_segment_command* seg = (struct macho_segment_command*)cmd;
                
                printf("seg name: %s\n", seg->segname);
                if (strcmp(seg->segname, "__RESTRICT") == 0) {
                    const struct macho_section* const sectionsStart = (struct macho_section*)((char*)seg + sizeof(struct macho_segment_command));
                    const struct macho_section* const sectionsEnd = &sectionsStart[seg->nsects];
                    for (const struct macho_section* sect=sectionsStart; sect < sectionsEnd; ++sect) {
                        if (strcmp(sect->sectname, "__restrict") == 0)
                            return true;
                    }
                }
            }
            break;
        }
        cmd = (const struct load_command*)(((char*)cmd)+cmd->cmdsize);
    }
        
    return false;
}

@end
