//
//  MSInterstitialAdManager.h
//  AdExpress
//
//  Copyright (c) 2016 AdExpress, Inc. All rights reserved.
//

#import "MSAdServerCommunicator.h"
#import "MSBaseInterstitialAdapter.h"

@protocol MSInterstitialAdManagerDelegate;

@interface MSInterstitialAdManager : NSObject <MSAdServerCommunicatorDelegate,
    MSInterstitialAdapterDelegate>

@property (nonatomic, weak) id<MSInterstitialAdManagerDelegate> delegate;
@property (nonatomic, assign, readonly) BOOL ready;

- (id)initWithDelegate:(id<MSInterstitialAdManagerDelegate>)delegate;

- (void)loadInterstitialWithAdUnitID:(NSString *)ID
                            keywords:(NSString *)keywords
                             testing:(BOOL)testing;
- (void)loadInterstitialWithAdUnitID:(NSString *)ID interval:(NSTimeInterval)interval;
- (void)loadInterstitialWithURL:(NSURL *)url;
- (void)presentInterstitialFromViewController:(UIViewController *)controller;
- (void)showSplashInWindow:(UIWindow *)window withBottomView:(nullable UIView *)bottomView;
- (BOOL)hasAdAvailable;
@end
