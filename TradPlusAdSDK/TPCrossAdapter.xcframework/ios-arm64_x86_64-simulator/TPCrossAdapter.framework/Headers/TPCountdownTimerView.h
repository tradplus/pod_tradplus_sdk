#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol TPCountdownTimerViewDelegate <NSObject>
- (void)tpCountdownTimerUpdate:(double)playTimeRate;
- (void)tpCountdownShowSkipButton;
@end

@interface TPCountdownTimerView : UIView
@property (nonatomic, assign, readonly) BOOL isCountdownActive;
@property (nonatomic, weak, nullable) id<TPCountdownTimerViewDelegate> delegate;
@property (nonatomic, assign) NSTimeInterval remainingSeconds;
@property (nonatomic, assign) NSTimeInterval totalSeconds;
@property (nonatomic, assign) BOOL isCN;

- (instancetype)initWithDuration:(NSTimeInterval)seconds timerCompletion:(void(^)(BOOL hasElapsed))completion;
- (void)start;
- (void)stopAndSignalCompletion:(BOOL)shouldSignalCompletion;
- (void)pause;
- (void)resume;

@end

NS_ASSUME_NONNULL_END
