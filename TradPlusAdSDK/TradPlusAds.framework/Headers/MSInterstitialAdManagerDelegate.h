//
//  MSInterstitialAdManagerDelegate.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MSInterstitialAdManager;
@class MSInterstitialAdController;

@protocol MSInterstitialAdManagerDelegate <NSObject>

- (MSInterstitialAdController *)interstitialAdController;
- (id)interstitialDelegate;
- (void)managerDidLoadInterstitial:(MSInterstitialAdManager *)manager;
- (void)manager:(MSInterstitialAdManager *)manager
didFailToLoadInterstitialWithError:(NSError *)error;
- (void)managerWillPresentInterstitial:(MSInterstitialAdManager *)manager;
- (void)managerDidPresentInterstitial:(MSInterstitialAdManager *)manager;
- (void)managerWillDismissInterstitial:(MSInterstitialAdManager *)manager;
- (void)managerDidDismissInterstitial:(MSInterstitialAdManager *)manager;
- (void)managerDidExpireInterstitial:(MSInterstitialAdManager *)manager;
- (void)managerDidReceiveTapEventFromInterstitial:(MSInterstitialAdManager *)manager;
- (void)managerDidLoadWinningBidWithInfoFromInterstitial:(MSInterstitialAdManager *)manager bidInfo:(NSDictionary *)bidInfo;
- (void)managerDidFailToPlayFromInterstitial:(MSInterstitialAdManager *)manager error:(NSError *)error;
- (NSDictionary *)managerGetAdConfig;
- (void)managerDidPlayStartInterstitial:(MSInterstitialAdManager *)manager;
- (void)managerDidPlayEndInterstitial:(MSInterstitialAdManager *)manager;

@end
