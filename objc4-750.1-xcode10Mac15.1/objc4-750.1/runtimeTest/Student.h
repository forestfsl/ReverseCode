//
//  Student.h
//  runtimeTest
//
//  Created by fengsl on 2020/2/19.
//

#import <Foundation/Foundation.h>

@class Person;

NS_ASSUME_NONNULL_BEGIN

@interface Student : NSObject

@property (nonatomic, weak) Person *person;

@end

NS_ASSUME_NONNULL_END
