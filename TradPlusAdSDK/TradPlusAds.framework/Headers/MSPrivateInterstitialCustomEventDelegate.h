//
//  MSPrivateInterstitialcustomEventDelegate.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSInterstitialCustomEventDelegate.h"

@class MSAdConfiguration;

@protocol MSPrivateInterstitialCustomEventDelegate <MSInterstitialCustomEventDelegate>

- (NSString *)adUnitId;
- (MSAdConfiguration *)configuration;
- (id)interstitialDelegate;

@end
