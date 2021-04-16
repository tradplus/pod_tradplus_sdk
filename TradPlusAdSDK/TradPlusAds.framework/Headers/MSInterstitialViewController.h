//
//  MSInterstitialViewController.h
//  AdExpress
//
//  Copyright (c) 2016 AdExpress, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MSGlobal.h"

@protocol MSInterstitialViewControllerDelegate;

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSInterstitialViewController : UIViewController

@property (nonatomic, assign) MSInterstitialCloseButtonStyle closeButtonStyle;
@property (nonatomic, assign) MSInterstitialOrientationType orientationType;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, weak) id<MSInterstitialViewControllerDelegate> delegate;

- (void)presentInterstitialFromViewController:(UIViewController *)controller;
- (void)dismissInterstitialAnimated:(BOOL)animated;
- (BOOL)shouldDisplayCloseButton;
- (void)willPresentInterstitial;
- (void)didPresentInterstitial;
- (void)willDismissInterstitial;
- (void)didDismissInterstitial;
- (void)layoutCloseButton;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol MSInterstitialViewControllerDelegate <NSObject>

- (NSString *)adUnitId;
- (void)interstitialDidLoadAd:(MSInterstitialViewController *)interstitial;
- (void)interstitialDidFailToLoadAd:(MSInterstitialViewController *)interstitial error:(NSError *)error;
- (void)interstitialWillAppear:(MSInterstitialViewController *)interstitial;
- (void)interstitialDidAppear:(MSInterstitialViewController *)interstitial;
- (void)interstitialWillDisappear:(MSInterstitialViewController *)interstitial;
- (void)interstitialDidDisappear:(MSInterstitialViewController *)interstitial;
- (void)interstitialDidReceiveTapEvent:(MSInterstitialViewController *)interstitial;
- (void)interstitialWillLeaveApplication:(MSInterstitialViewController *)interstitial;

@optional
- (void)interstitialRewardedVideoEnded;

@end
