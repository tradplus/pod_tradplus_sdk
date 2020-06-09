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

- (void)setAdUnitID:(NSString *)adUnitID;
- (void)loadAd;
- (NSString *)getLoadDetailInfo;
- (NSString *)getLoadDetailStatus;
- (NSString *)getFreqInfo;
- (void)showAdFromRootViewController:(nullable UIViewController *)rootViewController;

@property (nonatomic, weak, nullable) id<MsInterstitialAdDelegate> delegate;
@property (nonatomic, readonly) BOOL isAdReady;
@property (nonatomic, readonly) int readyAdCount;
@property (nonatomic, readonly) int cacheNum;
@property (nonatomic, strong) NSString *channelName;
@end

@protocol MsInterstitialAdDelegate <NSObject>
@optional
- (void)interstitialAdAllLoaded:(MsInterstitialAd *)interstitialAd readyCount:(int)readyCount;
- (void)interstitialAdLoaded:(MsInterstitialAd *)interstitialAd;
- (void)interstitialAd:(MsInterstitialAd *)interstitialAd didFailWithError:(NSError *)error;
- (void)interstitialAdShown:(MsInterstitialAd *)interstitialAd;
- (void)interstitialAdClicked:(MsInterstitialAd *)interstitialAd;
- (void)interstitialAdDismissed:(MsInterstitialAd *)interstitialAd;
//for demo
- (void)loadingInfoChangedI:(MsInterstitialAd *)interstitialAd;

@end

NS_ASSUME_NONNULL_END
