//
//  MSBannerAdManager.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSAdServerCommunicator.h"
#import "MSBaseBannerAdapter.h"

@protocol MSBannerAdManagerDelegate;

@interface MSBannerAdManager : NSObject <MSAdServerCommunicatorDelegate, MSBannerAdapterDelegate>

@property (nonatomic, weak) id<MSBannerAdManagerDelegate> delegate;

- (id)initWithDelegate:(id<MSBannerAdManagerDelegate>)delegate;

- (void)loadAd;
- (void)loadAdWithTimeoutInterval:(NSTimeInterval)interval;
- (void)showAdInKeyWindow:(UIWindow *)window customView:(nullable UIView *)customView skipView:(nullable UIView *)skipView;
- (void)loadTradPlusAdWithURL:(NSURL *)URL;
- (void)forceRefreshAd;
- (void)stopAutomaticallyRefreshingContents;
- (void)startAutomaticallyRefreshingContents;
- (void)rotateToOrientation:(UIInterfaceOrientation)orientation;

@end
