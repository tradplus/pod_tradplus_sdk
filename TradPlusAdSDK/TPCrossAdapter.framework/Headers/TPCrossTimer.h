
#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    GCDTimerInit = 0,
    GCDTimerStart,
    GCDTimerPasue,
    GCDTimerDestroy
} TPCrossTimerStatus;

@interface TPCrossTimer : NSObject

+ (TPCrossTimer *)timerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats block:(void (^)(void))block;
- (void)start;
- (void)stop;
- (void)close;

@property TPCrossTimerStatus timerStatus;
@end
