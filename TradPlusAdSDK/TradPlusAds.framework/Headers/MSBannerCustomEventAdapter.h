//
//  MSBannerCustomEventAdapter.h
//  AdExpress
//
//  Copyright (c) 2012 TradPlusAd, Inc. All rights reserved.
//

#import "MSBaseBannerAdapter.h"

#import "MSPrivateBannerCustomEventDelegate.h"

@class MSBannerCustomEvent;

@interface MSBannerCustomEventAdapter : MSBaseBannerAdapter <MSPrivateBannerCustomEventDelegate>

- (void)showAdInKeyWindow2:(UIWindow *)window views:(NSDictionary *)views;
@end
