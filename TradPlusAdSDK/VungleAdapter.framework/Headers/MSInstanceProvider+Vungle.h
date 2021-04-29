//
//  MSInstanceProvider+Vungle.h
//  TradPlusAdSDK
//
//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import <TradPlusAds/MSInstanceProvider.h>

@class MSVungleRouter;

@interface MSInstanceProvider (Vungle)

- (MSVungleRouter *)sharedMPVungleRouter;

@end
