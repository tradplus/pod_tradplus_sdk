
#import <Foundation/Foundation.h>

@protocol TradPlusAdapterProtocol <NSObject>

@required

///获取buyeruid
+ (NSString *)getBuyeruidWithInfo:(NSDictionary *)infoDic;
///获取版本号
+ (NSString *)sdkVersion;
@optional
+ (NSString *)getSDKInfoWithInfo:(NSDictionary *)infoDic;

+ (void)initSDKWithInfo:(NSDictionary *)infoDic callback:(void(^)(void))callback;

@end
