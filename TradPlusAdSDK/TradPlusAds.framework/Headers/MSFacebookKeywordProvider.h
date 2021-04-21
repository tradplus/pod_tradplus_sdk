//
//  MSFacebookAttributionIdProvider.h
//  AdExpress
//
//  Copyright (c) 2012 MeetSocial, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSKeywordProvider.h"

/*
 * This class enables the MeetSocial SDK to deliver targeted ads from Facebook via MeetSocial Marketplace
 * (MeetSocial's real-time bidding ad exchange) as part of a test program. This class sends an identifier
 * to Facebook so Facebook can select the ad MeetSocial will serve in your app through MeetSocial Marketplace.
 * If this class is removed from the SDK, your application will not receive targeted ads from
 * Facebook.
 */

@interface MSFacebookKeywordProvider : NSObject <MSKeywordProvider>

@end
