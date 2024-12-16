
#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    TPCrossGCDTimerInit = 0,
    TPCrossGCDTimerStart,
    TPCrossGCDTimerPasue,
    TPCrossGCDTimerDestroy
} TPCrossTimerStatus;

@interface TPCrossTimer : NSObject

+ (TPCrossTimer *)timerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats block:(void (^)(void))block;
- (void)start;
- (void)stop;
- (void)close;

@property TPCrossTimerStatus timerStatus;
@end
