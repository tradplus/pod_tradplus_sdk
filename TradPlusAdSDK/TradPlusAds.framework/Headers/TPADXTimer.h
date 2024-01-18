
#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    ADXTimerInit = 0,
    ADXTimerStart,
    ADXTimerPasue,
    ADXTimerDestroy
} TPADXTimerStatus;

@interface TPADXTimer : NSObject

+ (TPADXTimer *)timerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats block:(void (^)(void))block;
- (void)start;
- (void)stop;
- (void)close;

@property TPADXTimerStatus timerStatus;
@end
