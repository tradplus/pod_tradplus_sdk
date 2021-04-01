//
//  MSConstants.h
//
//  Copyright 2016 MeetSocial, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#define MS_DEBUG_MODE               1

#define MS_HAS_NATIVE_PACKAGE       1

#define DEFAULT_PUB_ID              @"agltb3B1Yi1pbmNyDAsSBFNpdGUYkaoMDA"
#define MS_SERVER_VERSION           @"8"
#define MS_BUNDLE_IDENTIFIER        @"com.meetsocial.meetsocial"
#define MS_SDK_VERSION              @"5.4.6"

// Sizing constants.
extern CGSize const MeetSocial_BANNER_SIZE;
extern CGSize const MeetSocial_MEDIUM_RECT_SIZE;
extern CGSize const MeetSocial_LEADERBOARD_SIZE;
extern CGSize const MeetSocial_WIDE_SKYSCRAPER_SIZE;

// Miscellaneous constants.
#define MINIMUM_REFRESH_INTERVAL            10.0
#define DEFAULT_BANNER_REFRESH_INTERVAL     60
#define BANNER_TIMEOUT_INTERVAL             10
#define INTERSTITIAL_TIMEOUT_INTERVAL       30
#define REWARDED_VIDEO_TIMEOUT_INTERVAL     30

// Feature Flags
#define SESSION_TRACKING_ENABLED            1
