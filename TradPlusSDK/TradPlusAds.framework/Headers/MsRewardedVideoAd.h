//  激励视频广告
//  MsRewardedVideoAd.h
//  TradPlusDemo
//
//  Created by ms-mac on 2017/1/12.
//  Copyright © 2017年 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSRewardedVideoReward.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MsRewardedVideoAdDelegate;

@interface MsRewardedVideoAd : NSObject

- (void)setAdUnitID:(NSString *)adUnitID;
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;
- (void)loadAd;
- (NSString *)getLoadDetailInfo;
- (NSString *)getLoadDetailStatus;
- (BOOL)showAdFromRootViewController:(nullable UIViewController *)rootViewController;
- (BOOL)showAdWithDirectionFromRootViewController:(nullable UIViewController *)rootViewController; //filter ad by screen direction.

@property (nonatomic, weak, nullable) id<MsRewardedVideoAdDelegate> delegate;
@property (nonatomic, readonly) BOOL isAdLoading;
@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) BOOL isAdReadyWithDirection; //filter ad by screen direction.
@property (nonatomic, readonly) BOOL isNetWorkAdReady;
@property (nonatomic) BOOL isPangleTemplateRender; //头条优量汇广告位是否开始模版渲染，默认为YES。
@property (nonatomic, readonly) int readyAdCount;
@property (nonatomic, readonly) int cacheNum;
@property (nonatomic, strong) NSString *channelName;          //渠道名

//相关回调时可以访问到的具体渠道信息。
@property (nonatomic, strong) NSMutableDictionary *dicChannelInfo;
@end

@protocol MsRewardedVideoAdDelegate <NSObject>
@optional
- (void)rewardedVideoAdAllLoaded:(MsRewardedVideoAd *)rewardedVideoAd readyCount:(int)readyCount;
- (void)rewardedVideoAdLoaded:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAd:(MsRewardedVideoAd *)rewardedVideoAd didFailWithError:(NSError *)error;
- (void)rewardedVideoAdShown:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdClicked:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdDismissed:(MsRewardedVideoAd *)rewardedVideoAd;
- (void)rewardedVideoAdShouldReward:(MsRewardedVideoAd *)rewardedVideoAd reward:(MSRewardedVideoReward *)reward;
//for debug
- (void)loadingInfoChangedR:(MsRewardedVideoAd *)rewardedVideoAd;
@end

NS_ASSUME_NONNULL_END
