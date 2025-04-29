
#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusGCDTimer.h>

@interface TPEventTimer : NSObject

+ (TPEventTimer *)timerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats block:(void (^)(void))block;
- (void)start;
- (void)stop;
- (void)close;

@property TradPlusTimerStatus timerStatus;
@end
