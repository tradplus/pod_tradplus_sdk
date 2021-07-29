//
//  SigmobRouter.h
//  TradPlusAdSDK
//
//  Copyright (c) 2016 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WindSDK/WindSDK.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SigmobRouterDelegate;

@interface SigmobRouter : NSObject <WindRewardedVideoAdDelegate, WindInterstitialAdDelegate>

+ (SigmobRouter *)sharedRouter;

- (void)initializeWithGameId:(NSString *)appid appkey:(NSString *)appkey;
- (void)requestFullscreenVideoAdWithAppId:(NSString *)appId appKey:(NSString *)appKey placementId:(NSString *)placementId delegate:(id<SigmobRouterDelegate>)delegate;

//v5.7.4.0 增加参数 userId
- (void)requestVideoAdWithAppId:(NSString *)appId appKey:(NSString *)appKey placementId:(NSString *)placementId userId:(NSString *)userId delegate:(id<SigmobRouterDelegate>)delegate;

- (void)requestVideoAdWithAppId:(NSString *)appId appKey:(NSString *)appKey placementId:(NSString *)placementId delegate:(id<SigmobRouterDelegate>)delegate;


- (void)presentFullscreenVideoAdFromViewController:(UIViewController *)viewController placementId:(NSString *)placementId           delegate:(id<SigmobRouterDelegate>)delegate;
- (void)presentVideoAdFromViewController:(UIViewController *)viewController placementId:(NSString *)placementId           delegate:(id<SigmobRouterDelegate>)delegate;
- (void)clearDelegate:(id<SigmobRouterDelegate>)delegate;

@end

@protocol SigmobRouterDelegate <NSObject>
@optional
- (void)onVideoAdLoadSuccess:(NSString * _Nullable)placementId;
- (void)onVideoError:(NSError *)error placementId:(NSString * _Nullable)placementId;
- (void)onVideoAdClosedWithInfo:(WindRewardInfo * _Nullable)info placementId:(NSString * _Nullable)placementId;
- (void)onVideoAdPlayStart:(NSString * _Nullable)placementId;
- (void)onVideoAdClicked:(NSString * _Nullable)placementId;
- (void)onVideoAdPlayError:(NSError *)error placementId:(NSString * _Nullable)placementId;
- (void)onVideoAdPlayEnd:(NSString *)placementId;

//- (void)onFullscreenVideoAdLoadSuccess:(NSString *)placementId;
//- (void)onFullscreenVideoAdError:(NSError *)error placementId:(NSString *)placementId;
//- (void)onFullscreenVideoAdClosed:(NSString *)placementId;
//- (void)onFullscreenVideoAdPlayStart:(NSString *)placementId;
//- (void)onFullscreenVideoAdClicked:(NSString *)placementId;
//- (void)onFullscreenVideoAdPlayError:(NSError *)error placementId:(NSString *)placementId;
//- (void)onFullscreenVideoAdPlayEnd:(NSString *)placementId;

- (void)onSMInterstitialAdLoadSuccess:(NSString *)placementId;
- (void)onSMInterstitialAdError:(NSError *)error placementId:(NSString *)placementId;
- (void)onSMInterstitialAdClosed:(NSString *)placementId;
- (void)onSMInterstitialAdPlayStart:(NSString *)placementId;
- (void)onSMInterstitialAdClicked:(NSString *)placementId;
- (void)onSMInterstitialAdPlayError:(NSError *)error placementId:(NSString *)placementId;
- (void)onSMInterstitialAdPlayEnd:(NSString *)placementId;

@end
NS_ASSUME_NONNULL_END
