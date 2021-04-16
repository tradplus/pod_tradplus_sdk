//
//  MSFacebookAttributionIdProvider.h
//  AdExpress
//
//  Copyright (c) 2012 TradPlusAd, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSKeywordProvider.h"

/*
 * This class enables the TradPlusAd SDK to deliver targeted ads from Facebook via TradPlusAd Marketplace
 * (TradPlusAd's real-time bidding ad exchange) as part of a test program. This class sends an identifier
 * to Facebook so Facebook can select the ad TradPlusAd will serve in your app through TradPlusAd Marketplace.
 * If this class is removed from the SDK, your application will not receive targeted ads from
 * Facebook.
 */

@interface MSFacebookKeywordProvider : NSObject <MSKeywordProvider>

@end
