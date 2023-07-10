
#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusHeliumSDKLoader : NSObject

+ (TradPlusHeliumSDKLoader *)sharedInstance;

- (void)initWithAppID:(NSString *)appID appSignature:(NSString *)appSignature
             delegate:(nullable id <TPSDKLoaderDelegate>)delegate;

//设置服务器奖励回调
- (void)setUserID:(NSString *)userID;

@property (nonatomic,assign) BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign) NSInteger initSource;

@end

NS_ASSUME_NONNULL_END
