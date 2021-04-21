//
//  MSLogEventCommunicator.h
//  MsSDK
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSLogEventCommunicator : NSObject

- (void)sendEvents:(NSArray *)events;
- (BOOL)isOverLimit;

@end
