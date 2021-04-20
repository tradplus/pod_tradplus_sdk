//
//  MSPrivateRewardedVideoCustomEventDelegate.h
//  AdExpress
//
//  Copyright © 2016 TradPlusAd. All rights reserved.
//

#import "MSRewardedVideoCustomEvent.h"

@class MSAdConfiguration;

@protocol MSPrivateRewardedVideoCustomEventDelegate <MSRewardedVideoCustomEventDelegate>

- (NSString *)adUnitId;
- (MSAdConfiguration *)configuration;

@end
