//
//  MSPrivateBannerCustomEventDelegate.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSBannerCustomEventDelegate.h"

@class MSAdConfiguration;

@protocol MSPrivateBannerCustomEventDelegate <MSBannerCustomEventDelegate>

- (NSString *)adUnitId;
- (MSAdConfiguration *)configuration;
- (id)bannerDelegate;

@end
