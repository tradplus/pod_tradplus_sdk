
#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    GCDTimerInit = 0,
    GCDTimerStart,
    GCDTimerPasue,
    GCDTimerDestroy
} TPADXTimerStatus;

@interface TPADXTimer : NSObject

+ (TPADXTimer *)timerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats block:(void (^)(void))block;
- (void)start;
- (void)stop;
- (void)close;

@property TPADXTimerStatus timerStatus;
@end
