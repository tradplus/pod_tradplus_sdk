//
//  NSURL+MSAdditions.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    MSTradPlusAdHostCommandUnrecognized,
    MSTradPlusAdHostCommandClose,
    MSTradPlusAdHostCommandFinishLoad,
    MSTradPlusAdHostCommandFailLoad,
    MSTradPlusAdHostCommandPrecacheComplete,
    MSTradPlusAdHostCommandRewardedVideoEnded
} MSTradPlusAdHostCommand;

typedef enum {
    MSTradPlusAdShareHostCommandTweet,
    MSTradPlusAdShareHostCommandUnrecognized
} MSTradPlusAdShareHostCommand;

@interface NSURL (MSAdditions)

- (NSString *)mp_queryParameterForKey:(NSString *)key;
- (NSArray *)mp_queryParametersForKey:(NSString *)key;
- (NSDictionary *)mp_queryAsDictionary;
- (BOOL)mp_hasTelephoneScheme;
- (BOOL)mp_hasTelephonePromptScheme;
- (BOOL)mp_isSafeForLoadingWithoutUserAction;
- (BOOL)mp_isTradPlusAdScheme;
- (MSTradPlusAdHostCommand)mp_fluteHostCommand;
- (BOOL)mp_isTradPlusAdShareScheme;
- (MSTradPlusAdShareHostCommand)mp_TradPlusAdShareHostCommand;

@end
