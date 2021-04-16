#import <Foundation/Foundation.h>

@interface SmaatoAdapterConfig : NSObject

+ (void)setPrivacy:(NSDictionary *)info;

+ (void)initSmaatoSDK:(NSString *)appid;

@end
