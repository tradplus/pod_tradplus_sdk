//
//  MSTradPlusAdRewardedVideoCustomEvent.h
//  MsSDK

//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import "MSRewardedVideoCustomEvent.h"
#import "MSPrivateRewardedVideoCustomEventDelegate.h"

@interface MSTradPlusAdRewardedVideoCustomEvent : MSRewardedVideoCustomEvent

@property (nonatomic, weak) id<MSPrivateRewardedVideoCustomEventDelegate> delegate;

@end
