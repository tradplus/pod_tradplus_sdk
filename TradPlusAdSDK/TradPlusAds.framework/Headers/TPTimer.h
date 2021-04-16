#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @c TPTimer is a thread safe @c NSTimer wrapper, with pause / resume functionality.
 */
@interface TPTimer : NSObject

/**
 Return NO is the timer is paused, and return YES otherwise.
 */
@property (nonatomic, readonly) BOOL isCountdownActive;

+ (TPTimer *)timerWithTimeInterval:(NSTimeInterval)seconds
                           repeats:(BOOL)repeats
                       runLoopMode:(NSString *)runLoopMode
                             block:(void(^)(TPTimer *timer))block;

+ (TPTimer *)timerWithTimeInterval:(NSTimeInterval)seconds
                           repeats:(BOOL)repeats
                             block:(void(^)(TPTimer *timer))block;

- (BOOL)isValid;
- (void)invalidate;
- (void)scheduleNow;
- (void)pause;
- (void)resume;

@end

NS_ASSUME_NONNULL_END
