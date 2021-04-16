//
//  MSMRAIDInterstitialViewController.h
//  AdExpress
//
//  Copyright (c) 2012 TradPlusAd, Inc. All rights reserved.
//

#import "MSInterstitialViewController.h"
#import "MSForceableOrientationProtocol.h"

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol MSMRAIDInterstitialViewControllerDelegate;
@class MSAdConfiguration;

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSMRAIDInterstitialViewController : MSInterstitialViewController <MSForceableOrientationProtocol>

- (id)initWithAdConfiguration:(MSAdConfiguration *)configuration;
- (void)startLoading;

@end

