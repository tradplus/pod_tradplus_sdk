#import <UIKit/UIKit.h>

/***
 TPRealTimeTimer is a class meant for situations in which one may want to disaptch an event for later without
 any regard for application state. Backgrounding and suspension will not affect time keeping. TPRealTimeTimer will NOT
 fire while the application is backgrounded or suspended, but will fire immediately upon foregrounding if the
 application is not foregrounded when the time interval elapses.

 Note: TPRealTimeTimer uses NSTimer as a base and as such perfect accuracy is not guaranteed.
 ***/

@interface TPRealTimeTimer : NSObject

// Initializer which takes in a time interval (from when `scheduleNow` is called) and a block to execute when firing.
- (instancetype)initWithInterval:(NSTimeInterval)interval
                           block:(void(^)(TPRealTimeTimer *))block NS_DESIGNATED_INITIALIZER;

// Returns `YES` if the timer is currently keeping time; `NO` if it's waiting to be scheduled.
@property (nonatomic, assign, readonly) BOOL isScheduled;

// Schedules the TPRealTimeTimer instance to fire at `interval` seconds from now. Calling `scheduleNow` while
// `isScheduled` is set to `YES` will do nothing.
- (void)scheduleNow;

// Executes `block` and stops all time keeping.
- (void)fire;

// Stops all time keeping without executing anything.
- (void)invalidate;

// Use of `init` is not supported.
- (instancetype)init NS_UNAVAILABLE;

@end
