

#import <Foundation/Foundation.h>
#import "CustomProtocol.h"

@interface CustomClass : NSObject<CustomProtocol>

@property (nonatomic, strong) NSString* customIvar;

-(void)classDoSomething;

@end
