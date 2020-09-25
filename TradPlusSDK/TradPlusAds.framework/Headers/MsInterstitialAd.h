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
@property (nonatomic, readonly) BOOL isNetWorkAdReady;
@property (nonatomic) BOOL isPangleTemplateRender; //头条优量汇广告位是否开始模版渲染，默认为YES。
@property (nonatomic, readonly) int readyAdCount;
@property (nonatomic, readonly) int cacheNum;
@property (nonatomic, strong) NSString *channelName;
//相关回调时可以访问到的具体渠道信息。
@property (nonatomic, strong) NSMutableDictionary *dicChannelInfo;

- (void)setAdUnitID:(NSString *)adUnitID;
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;
- (void)loadAd;
- (NSString *)getLoadDetailInfo;
- (NSString *)getLoadDetailStatus;
- (NSString *)getFreqInfo;
- (BOOL)showAdFromRootViewController:(nullable UIViewController *)rootViewController;

@end

@protocol MsInterstitialAdDelegate <NSObject>
@optional
- (void)interstitialAdAllLoaded:(MsInterstitialAd *)interstitialAd readyCount:(int)readyCount;
- (void)interstitialAdLoaded:(MsInterstitialAd *)interstitialAd;
- (void)interstitialAd:(MsInterstitialAd *)interstitialAd didFailWithError:(NSError *)error;
- (void)interstitialAdShown:(MsInterstitialAd *)interstitialAd;
- (void)interstitialAdClicked:(MsInterstitialAd *)interstitialAd;
- (void)interstitialAdDismissed:(MsInterstitialAd *)interstitialAd;
//for debug
- (void)loadingInfoChangedI:(MsInterstitialAd *)interstitialAd;

@end

NS_ASSUME_NONNULL_END
