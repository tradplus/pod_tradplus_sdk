//
//  MSInterstitialAdManagerDelegate.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MSInterstitialAdManager;
@class MSInterstitialAdController;
@class CLLocation;

@protocol MSInterstitialAdManagerDelegate <NSObject>

- (MSInterstitialAdController *)interstitialAdController;
- (CLLocation *)location;
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

- (NSDictionary *)managerGetAdConfig;

@end
