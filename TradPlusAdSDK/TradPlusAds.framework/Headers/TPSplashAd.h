//
//  TPSplashAd.h
//  TradPlusSDKSample
//
//  Created by ms-mac on 2019/10/22.
//  Copyright © 2019 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TPSplashAdDelegate;

@interface TPSplashAd : NSObject

@property (nonatomic, weak, nullable) id<TPSplashAdDelegate> delegate;
@property (nonatomic, readonly) BOOL isAdLoading;
@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) int readyAdCount;
@property (nonatomic, readonly) int cacheNum;
@property (nonatomic, strong) NSString *channelName;
//相关回调时可以访问到的具体渠道信息。
@property (nonatomic, strong) NSMutableDictionary *dicChannelInfo;
//穿山甲开屏底部预留空白的高度，可在show的时候customView传入对应高度的view，view的frame自行设置。
//default 0
@property (nonatomic, assign) int pangleBottomHeight;

//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

- (void)setAdUnitID:(NSString *)adUnitID;
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;
- (void)loadAd;
- (NSString *)getLoadDetailInfo;
- (NSString *)getLoadDetailStatus;
- (NSString *)getFreqInfo;

//设置本地策略 首次启动时不用从TradPlus后台拉取策略
- (void)setStrategy:(NSString *)base64Strategy;

- (void)showSplashInWindow:(UIWindow *)window withBottomView:(nullable UIView *)bottomView;

//850埋点 用于统计广告展示前的广告ready比率
- (void)entryAdScenario;
- (void)entryAdScenario:(nullable NSString *)sceneId; //后台设置了广告场景 参数为场景ID
@end

@protocol TPSplashAdDelegate <NSObject>
@optional
- (void)splashAdDidLoaded:(NSDictionary *)dicChannelInfo;
- (void)splashAd:(NSDictionary *)dicChannelInfo didFailedWithError:(NSError *)error;
- (void)splashAdShown:(NSDictionary *)dicChannelInfo;
- (void)splashAdFailToPlay:(NSDictionary *)dicChannelInfo error:(NSError *)error;
- (void)splashAdClicked:(NSDictionary *)dicChannelInfo;
- (void)splashAdDismissed:(NSDictionary *)dicChannelInfo;

- (void)splashAdAllLoaded:(int)readyCount;
- (void)splashAdOneLayerLoaded:(NSDictionary *)dicChannelInfo;
- (void)splashAdOneLayer:(NSDictionary *)dicChannelInfo didFailWithError:(NSError *)error;
- (void)splashAdBidStart;
- (void)splashAdBidEnd;
- (void)splashAdLoadStart:(NSDictionary *)dicChannelInfo;
- (void)splashAdPlayStart:(NSDictionary *)dicChannelInfo;
- (void)splashAdPlayEnd:(NSDictionary *)dicChannelInfo;

//for debug
- (void)loadingInfoChangedS;

@end

NS_ASSUME_NONNULL_END
