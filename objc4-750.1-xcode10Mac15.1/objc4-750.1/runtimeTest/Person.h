//
//  Person.h
//  runtimeTest
//
//

#import <Foundation/Foundation.h>
#import "Student.h"

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject
@property (weak, nonatomic) Student *stu;
//@property (weak, nonatomic) Student *stu1;
//@property (weak, nonatomic) Student *stu2;
//@property (weak, nonatomic) Student *stu3;
//@property (weak, nonatomic) Student *stu4;
//@property (weak, nonatomic) Student *stu5;

- (void)say;

@end

NS_ASSUME_NONNULL_END
