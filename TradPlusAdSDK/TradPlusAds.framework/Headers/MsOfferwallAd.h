//  积分墙广告
//  MsOfferwallAd.h
//
//  Created by ms-mac on 2017/1/12.
//  Copyright © 2017年 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSRewardedVideoReward.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MsOfferwallAdDelegate;

@interface MsOfferwallAd : NSObject

- (void)setAdUnitID:(NSString *)adUnitID;
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;
- (void)loadAd;
- (NSString *)getLoadDetailInfo;
- (NSString *)getLoadDetailStatus;
- (BOOL)showAdFromRootViewController:(nullable UIViewController *)rootViewController;

@property (nonatomic, weak, nullable) id<MsOfferwallAdDelegate> delegate;
@property (nonatomic, readonly) BOOL isAdLoading;
@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) BOOL isNetWorkAdReady;
@property (nonatomic, readonly) int readyAdCount;
@property (nonatomic, readonly) int cacheNum;
@property (nonatomic, strong) NSString *channelName;
//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@end

@protocol MsOfferwallAdDelegate <NSObject>
@optional
- (void)offerwallAdAllLoaded:(MsOfferwallAd *)offerwallAd readyCount:(int)readyCount;
- (void)offerwallAdLoaded:(MsOfferwallAd *)offerwallAd;
- (void)offerwallAd:(MsOfferwallAd *)offerwallAd didFailWithError:(NSError *)error;
- (void)offerwallAdShown:(MsOfferwallAd *)offerwallAd;
- (void)offerwallAdClicked:(MsOfferwallAd *)offerwallAd;
- (void)offerwallAdDismissed:(MsOfferwallAd *)offerwallAd;
- (void)offerwallAdShouldReward:(MsOfferwallAd *)offerwallAd reward:(MSRewardedVideoReward *)reward;
//for debug
- (void)loadingInfoChangedO:(MsOfferwallAd *)offerwallAd;
@end

NS_ASSUME_NONNULL_END
