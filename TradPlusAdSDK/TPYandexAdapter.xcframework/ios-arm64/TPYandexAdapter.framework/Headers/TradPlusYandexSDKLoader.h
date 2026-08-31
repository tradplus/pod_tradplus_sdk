#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

@class YMAAdRequest;

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusYandexSDKLoader : NSObject

+ (TradPlusYandexSDKLoader *)sharedInstance;
+ (NSString *)yandexSDKVersionString;
+ (YMAAdRequest *)adRequestWithAdUnitID:(NSString *)adUnitID
                            biddingData:(nullable NSString *)biddingData
                             parameters:(nullable NSDictionary<NSString *, NSString *> *)parameters;
/// Yandex test ads do not call didTrackImpression; mirror MAX and only fall back to DidShow in test mode.
+ (BOOL)isTestMode;
- (void)initWithDelegate:(nullable id <TPSDKLoaderDelegate>)delegate;

@property (nonatomic,assign)BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign)NSInteger initSource;
@end
NS_ASSUME_NONNULL_END
