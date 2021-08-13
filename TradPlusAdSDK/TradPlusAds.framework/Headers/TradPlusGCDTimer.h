
#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    GCDTimerInit = 0,
    GCDTimerStart,
    GCDTimerPasue,
    GCDTimerDestroy
} TradPlusTimerStatus;

@interface TradPlusGCDTimer : NSObject

+ (TradPlusGCDTimer *)timerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats block:(void (^)(void))block;
- (void)start;
- (void)stop;
- (void)close;

@property TradPlusTimerStatus timerStatus;
@end
