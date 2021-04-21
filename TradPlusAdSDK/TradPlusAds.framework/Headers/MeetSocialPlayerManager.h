//
//  MeetSocialPlayerManager.h
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MeetSocialPlayerViewController;
@class MeetSocialNativeVideoAdConfigValues;
@class MSVideoConfig;
@class MSAdConfigurationLogEventProperties;

@interface MeetSocialPlayerManager : NSObject

+ (MeetSocialPlayerManager *)sharedInstance;
- (void)disposePlayerViewController;

- (MeetSocialPlayerViewController *)playerViewControllerWithVideoConfig:(MSVideoConfig *)videoConfig nativeVideoAdConfig:(MeetSocialNativeVideoAdConfigValues *)nativeVideoAdConfig logEventProperties:(MSAdConfigurationLogEventProperties *)logEventProperties;

@end
