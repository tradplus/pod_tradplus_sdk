//
//  MSLogEventCommunicator.h
//  MsSDK
//
//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSLogEventCommunicator : NSObject

- (void)sendEvents:(NSArray *)events;
- (BOOL)isOverLimit;

@end
