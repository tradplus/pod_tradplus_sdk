//
//  MSAPIEndpoints.h
//  AdExpress
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>

#define MeetSocial_BASE_HOSTNAME_FOR_TESTING     @"testing.ads.meetsocial.com"

#define MeetSocial_API_PATH_AD_REQUEST           @"/m/ad"
#define MeetSocial_API_PATH_CONVERSION           @"/m/open"
#define MeetSocial_API_PATH_NATIVE_POSITIONING   @"/m/pos"
#define MeetSocial_API_PATH_SESSION              @"/m/open"

@interface MSAPIEndpoints : NSObject

+ (void)setUsesHTTPS:(BOOL)usesHTTPS;
+ (NSString *)baseURL;
+ (NSString *)baseURLStringWithPath:(NSString *)path testing:(BOOL)testing;

@end
