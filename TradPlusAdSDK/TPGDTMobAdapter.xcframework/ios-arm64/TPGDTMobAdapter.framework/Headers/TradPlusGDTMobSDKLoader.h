//
//  TradPlusGDTMobSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusGDTMobSDKLoader : NSObject

+ (TradPlusGDTMobSDKLoader *)sharedInstance;
- (void)initWithAppID:(NSString *)appID
             delegate:(nullable id <TPSDKLoaderDelegate>)delegate;
- (void)setAudioSessionSettingWithExtraInfo:(NSDictionary *)extraInfo;
- (void)setPersonalizedAd;

@property (nonatomic,assign)BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign)NSInteger initSource;
//v13.5.0原生自渲染 GDTUnifiedNativeAdView YES = 使用 adView的Frame。 NO使用adView的bounds
@property (nonatomic,assign)BOOL nativeUseAdViewFrame;
@end
NS_ASSUME_NONNULL_END
