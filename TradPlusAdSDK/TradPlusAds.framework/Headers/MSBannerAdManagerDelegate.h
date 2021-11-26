//
//  MSBannerAdManagerDelegate.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MSAdView;
@protocol MSAdViewDelegate;

@protocol MSBannerAdManagerDelegate <NSObject>

- (NSString *)adUnitId;
- (NSDictionary *)bannerConfig;
- (MSNativeAdOrientation)allowedNativeAdsOrientation;
- (MSAdView *)banner;
- (id<MSAdViewDelegate>)bannerDelegate;
- (CGSize)containerSize;
- (NSString *)keywords;
- (BOOL)isTesting;
- (UIViewController *)viewControllerForPresentingModalView;

- (void)invalidateContentView;

- (void)managerDidLoadAd:(UIView *)ad;
//- (void)managerDidFailToLoadAd;
- (void)managerDidFailToLoadAd:(NSError *)error;
- (void)userActionWillBegin;
- (void)userActionDidFinish;
- (void)userWillLeaveApplication;
- (void)managerBannerAdShown;
- (void)managerBannerCountdownToZero;
- (void)managerBannerAdClose;

@end
