#import <Foundation/Foundation.h>

@class MSLogEvent;

void MSAddLogEvent(MSLogEvent *event);

@interface MSLogEventRecorder : NSObject

- (void)addEvent:(MSLogEvent *)event;

@end
