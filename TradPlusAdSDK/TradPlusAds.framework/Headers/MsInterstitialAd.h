//
//  MsInterstitialAd.h
//  TradPlusSDKSample
//
//  Created by ms-mac on 2019/10/22.
//  Copyright © 2019 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MsInterstitialAdDelegate;

@interface MsInterstitialAd : NSObject

@property (nonatomic, weak, nullable) id<MsInterstitialAdDelegate> delegate;
@property (nonatomic, readonly) BOOL isAdLoading;
@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) BOOL isNetWorkAdReady __deprecated_msg("Use `entryAdScenario` instead.");
//头条优量汇广告位是否开启模版渲染，默认为YES。从v5.0.0开始 在TradPlus后台设置
//@property (nonatomic) BOOL isPangleTemplateRender __deprecated;
@property (nonatomic, readonly) int readyAdCount;
@property (nonatomic, readonly) int cacheNum;
@property (nonatomic, strong) NSString *channelName;
//相关回调时可以访问到的具体渠道信息。
@property (nonatomic, strong) NSMutableDictionary *dicChannelInfo;

//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@property (nonatomic, assign) BOOL isExpiredAdChecking;

- (void)setAdUnitID:(NSString *)adUnitID;
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;
- (void)loadAd;
- (NSString *)getLoadDetailInfo;
- (NSString *)getLoadDetailStatus;
- (NSString *)getFreqInfo;
- (BOOL)showAdFromRootViewController:(nullable UIViewController *)rootViewController;
- (BOOL)showAdFromRootViewController:(nullable UIViewController *)rootViewController sceneId:(nullable NSString *)sceneId;

//850埋点 用于统计广告展示前的广告ready比率
- (void)entryAdScenario;
- (void)entryAdScenario:(nullable NSString *)sceneId; //后台设置了广告场景 参数为场景ID

- (void)expiredAdCheck;
@end

@protocol MsInterstitialAdDelegate <NSObject>
@optional
- (void)interstitialAdDidLoaded:(NSDictionary *)dicChannelInfo;
- (void)interstitialAd:(NSDictionary *)dicChannelInfo didFailedWithError:(NSError *)error;
- (void)interstitialAdShown:(NSDictionary *)dicChannelInfo;
- (void)interstitialAdFailToPlay:(NSDictionary *)dicChannelInfo error:(NSError *)error;
- (void)interstitialAdClicked:(NSDictionary *)dicChannelInfo;
- (void)interstitialAdDismissed:(NSDictionary *)dicChannelInfo;

- (void)interstitialAdAllLoaded:(int)readyCount;
- (void)interstitialAdOneLayerLoaded:(NSDictionary *)dicChannelInfo;
- (void)interstitialAdOneLayer:(NSDictionary *)dicChannelInfo didFailWithError:(NSError *)error;
- (void)interstitialAdBidStart;
- (void)interstitialAdBidEnd;
- (void)interstitialAdLoadStart:(NSDictionary *)dicChannelInfo;
- (void)interstitialAdPlayStart:(NSDictionary *)dicChannelInfo;
- (void)interstitialAdPlayEnd:(NSDictionary *)dicChannelInfo;

//for debug
- (void)loadingInfoChangedI;

@end

NS_ASSUME_NONNULL_END
