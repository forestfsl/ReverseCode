

#import "ViewController.h"
#import "fishhook.h"

@interface ViewController ()

@end

@implementation ViewController

void func(const char * str){
    NSLog(@"%s",str);
}

- (void)viewDidLoad {
    [super viewDidLoad];
    //rebinding结构体
    struct rebinding nslog;
    nslog.name = "func";
    nslog.replacement = new_func;
    nslog.replaced = (void *)&old_func;
    //rebinding结构体数组
    struct rebinding rebs[1] = {nslog};
    /**
     * 存放rebinding结构体的数组
     * 数组的长度
     */
    rebind_symbols(rebs, 1);
}
//---------------------------------更改NSLog-----------
//函数指针
static void(*old_func)(const char * str);
//定义一个新的函数
void new_func(const char * str){
      NSLog(@"%s + 1",str);
}



-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
//    func("哈哈");
    NSLog(@"哈哈！");
}

@end
