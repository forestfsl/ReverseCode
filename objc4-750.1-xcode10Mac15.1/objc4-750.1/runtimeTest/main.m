//
//  main.m
//  runtimeTest
//
//

#import <Foundation/Foundation.h>
#import "objc-runtime.h"
#import "Person.h"
#import "Person+Fly.h"

// 把一个十进制的数转为二进制
NSString * binaryWithInteger(NSUInteger decInt){
    NSString *string = @"";
    NSUInteger x = decInt;
    while(x > 0){
        string = [[NSString stringWithFormat:@"%lu",x&1] stringByAppendingString:string];
        x = x >> 1;
    }
    return string;
}


void test1(){
    // insert code here...
    Person *p = [[Person alloc] init];
    [p fly];
    
    Class pcls = [Person class];
    NSLog(@"p address = %p",pcls);
}

void test2(){
    NSObject *object1 = [[NSObject alloc]init];
    NSArray *array1 = [[NSArray alloc]init];
     Class arrayClass1 = [array1 class];
    NSObject *object2 = [[NSObject alloc]init];
    Class objectClass1 = [object1 class];
    Class objectClass2 = [object2 class];
    Class objectClass3 = [NSObject class];
    Class objectClass4 = object_getClass(object1);//Runtime API
    Class objectClass5 = object_getClass(object2);//RunTime API
    
    NSLog(@"object1:%@",object1);
    NSLog(@"object2:%@",object2);
    NSLog(@"objectClass1:%p",objectClass1);
    NSLog(@"objectClass2:%p",objectClass2);
    NSLog(@"objectClass3:%p",objectClass3);
    NSLog(@"objectClass4:%p",objectClass4);
    NSLog(@"objectClass5:%p",objectClass5);
}

void test3(){
    NSNumber *number1 = @4;
    NSNumber *number2 = @5;
    NSNumber *number3 = @(0xFFFFFFFFFFFFFFF);
}

void test4(){
    Student *stu = [Student alloc];
    
    Student *stu1 = [stu1 init];
    Student *stu2 = [stu1 init];
    
    NSLog(@"%@--%@",stu1,stu2);
}

int main(int argc, const char * argv[]) {
    // 整个程序都包含在一个@autoreleasepool中
    @autoreleasepool {
//        Student *stu = [Student alloc];
//
//           Student *stu1 = [stu1 init];
//           Student *stu2 = [stu1 init];
//
//           NSLog(@"%@--%@",stu1,stu2);
////        test4();
//        test2();
//        test3();
         Person *objPerson = [[Person alloc]init];
//        {
//            NSObject *obj = [[NSObject alloc] init];
//            id __weak obj1 = obj;

//            objPerson.stu = [[Student alloc]init];
            
//            objStu.person = objPerson;
//           person.stu1 = [[Student alloc]init];
//           person.stu2 = [[Student alloc]init];
//           person.stu3 = [[Student alloc]init];
//           person.stu4 = [[Student alloc]init];
//           person.stu5 = [[Student alloc]init];
//        NSLog(@"%@,%@,%@,%@,%@",person.stu,person.stu1,person.stu2,person.stu3,person.stu4,person.stu5);//(null),(null),(null),(null),(null)
//            NSLog(@"%@",objPerson);
//        }
//        NSLog(@"%@",objPerson);
    }
    
    return 0;
}
