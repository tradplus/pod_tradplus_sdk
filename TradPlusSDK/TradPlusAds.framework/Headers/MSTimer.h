//
//  MSTimer.h
//  AdExpress
//
//  Copyright 2016 MeetSocial, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 * MSTimer wraps an NSTimer and adds pause/resume functionality.
 */
@interface MSTimer : NSObject

@property (nonatomic, copy) NSString *runLoopMode;

+ (MSTimer *)timerWithTimeInterval:(NSTimeInterval)seconds
                            target:(id)target
                          selector:(SEL)aSelector
                           repeats:(BOOL)repeats;

- (BOOL)isValid;
- (void)invalidate;
- (BOOL)isScheduled;
- (BOOL)scheduleNow;
- (BOOL)pause;
- (BOOL)resume;
- (NSTimeInterval)initialTimeInterval;

@end
