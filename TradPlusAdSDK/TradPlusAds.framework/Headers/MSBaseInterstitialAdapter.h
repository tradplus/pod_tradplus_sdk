//
//  MSBaseInterstitialAdapter.h
//  AdExpress
//
//  Copyright 2016 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class MSAdConfiguration;

@protocol MSInterstitialAdapterDelegate;

@interface MSBaseInterstitialAdapter : NSObject

@property (nonatomic, weak) id<MSInterstitialAdapterDelegate> delegate;

/*
 * Creates an adapter with a reference to an MSInterstitialAdManager.
 */
- (id)initWithDelegate:(id<MSInterstitialAdapterDelegate>)delegate;

/*
 * Sets the adapter's delegate to nil.
 */
- (void)unregisterDelegate;

- (void)getAdWithConfiguration:(MSAdConfiguration *)configuration;
- (void)_getAdWithConfiguration:(MSAdConfiguration *)configuration;

- (void)didStopLoading;

/*
 * Presents the interstitial from the specified view controller.
 */
- (void)showInterstitialFromViewController:(UIViewController *)controller;
- (void)showSplashInWindow:(UIWindow *)window withBottomView:(nullable UIView *)bottomView;

- (BOOL)hasAdAvailable;
@end

@interface MSBaseInterstitialAdapter (ProtectedMethods)

- (void)trackImpression;
- (void)trackClick;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@class MSInterstitialAdController;

@protocol MSInterstitialAdapterDelegate

- (MSInterstitialAdController *)interstitialAdController;
- (id)interstitialDelegate;

- (void)adapterDidFinishLoadingAd:(MSBaseInterstitialAdapter *)adapter;
- (void)adapter:(MSBaseInterstitialAdapter *)adapter didFailToLoadAdWithError:(NSError *)error;
- (void)interstitialWillAppearForAdapter:(MSBaseInterstitialAdapter *)adapter;
- (void)interstitialDidAppearForAdapter:(MSBaseInterstitialAdapter *)adapter;
- (void)interstitialWillDisappearForAdapter:(MSBaseInterstitialAdapter *)adapter;
- (void)interstitialDidDisappearForAdapter:(MSBaseInterstitialAdapter *)adapter;
- (void)interstitialDidExpireForAdapter:(MSBaseInterstitialAdapter *)adapter;
- (void)interstitialDidReceiveTapEventForAdapter:(MSBaseInterstitialAdapter *)adapter;
- (void)interstitialWillLeaveApplicationForAdapter:(MSBaseInterstitialAdapter *)adapter;
- (void)interstitialDidLoadWinningBidWithInfoForAdapter:(MSBaseInterstitialAdapter *)adapter bidInfo:(NSDictionary *)bidInfo;
- (void)interstitialCustomEventDidFailToPlayForAdapter:(MSBaseInterstitialAdapter *)customEvent error:(NSError *)error;
- (void)interstitialDidPlayStartForAdapter:(MSBaseInterstitialAdapter *)adapter;
- (void)interstitialDidPlayEndForAdapter:(MSBaseInterstitialAdapter *)adapter;

@end
