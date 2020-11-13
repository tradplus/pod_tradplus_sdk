//
//  MSInstanceProvider+Vungle.h
//  MeetSocialSDK
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <TradPlusAds/MSInstanceProvider.h>

@class MSVungleRouter;

@interface MSInstanceProvider (Vungle)

- (MSVungleRouter *)sharedMPVungleRouter;

@end
