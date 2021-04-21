//
//  NSURL+MSAdditions.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    MSMeetSocialHostCommandUnrecognized,
    MSMeetSocialHostCommandClose,
    MSMeetSocialHostCommandFinishLoad,
    MSMeetSocialHostCommandFailLoad,
    MSMeetSocialHostCommandPrecacheComplete,
    MSMeetSocialHostCommandRewardedVideoEnded
} MSMeetSocialHostCommand;

typedef enum {
    MSMeetSocialShareHostCommandTweet,
    MSMeetSocialShareHostCommandUnrecognized
} MSMeetSocialShareHostCommand;

@interface NSURL (MSAdditions)

- (NSString *)mp_queryParameterForKey:(NSString *)key;
- (NSArray *)mp_queryParametersForKey:(NSString *)key;
- (NSDictionary *)mp_queryAsDictionary;
- (BOOL)mp_hasTelephoneScheme;
- (BOOL)mp_hasTelephonePromptScheme;
- (BOOL)mp_isSafeForLoadingWithoutUserAction;
- (BOOL)mp_isMeetSocialScheme;
- (MSMeetSocialHostCommand)mp_fluteHostCommand;
- (BOOL)mp_isMeetSocialShareScheme;
- (MSMeetSocialShareHostCommand)mp_MeetSocialShareHostCommand;

@end
