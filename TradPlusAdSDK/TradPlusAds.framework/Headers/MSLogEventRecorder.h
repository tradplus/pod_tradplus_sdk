//
//  MSLogEventRecorder.h
//  MsSDK
//
//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MSLogEvent;

void MSAddLogEvent(MSLogEvent *event);

@interface MSLogEventRecorder : NSObject

- (void)addEvent:(MSLogEvent *)event;

@end
