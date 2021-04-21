//
//  SigmobRouter.h
//  MeetSocialSDK
//
//  Copyright (c) 2016 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WindSDK/WindSDK.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SigmobRouterDelegate;

@interface SigmobRouter : NSObject <WindRewardedVideoAdDelegate, WindFullscreenVideoAdDelegate>

+ (SigmobRouter *)sharedRouter;

- (void)initializeWithGameId:(NSString *)appId;
- (void)requestFullscreenVideoAdWithAppId:(NSString *)appId placementId:(NSString *)placementId delegate:(id<SigmobRouterDelegate>)delegate;
- (void)requestVideoAdWithAppId:(NSString *)appId placementId:(NSString *)placementId delegate:(id<SigmobRouterDelegate>)delegate;
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

- (void)onFullscreenVideoAdLoadSuccess:(NSString *)placementId;
- (void)onFullscreenVideoAdError:(NSError *)error placementId:(NSString *)placementId;
- (void)onFullscreenVideoAdClosed:(NSString *)placementId;
- (void)onFullscreenVideoAdPlayStart:(NSString *)placementId;
- (void)onFullscreenVideoAdClicked:(NSString *)placementId;
- (void)onFullscreenVideoAdPlayError:(NSError *)error placementId:(NSString *)placementId;
- (void)onFullscreenVideoAdPlayEnd:(NSString *)placementId;
//- (void)onFullscreenVideoAdServerDidSuccess:(NSString *)placementId;
//- (void)onFullscreenVideoAdServerDidFail:(NSString *)placementId;

@end
NS_ASSUME_NONNULL_END
