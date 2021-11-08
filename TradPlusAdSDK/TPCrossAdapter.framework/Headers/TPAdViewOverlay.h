#import <UIKit/UIKit.h>
#import "TPAdViewConstant.h"

@class TPAdViewOverlay, TPCreativeExperienceSettings;

typedef NS_ENUM(NSUInteger, TPAdOverlayClickthroughType) {
    /// Disable clickthrough.
    TPAdOverlayClickthroughTypeNone,

    /// Show the CTA button with the title provided in the @c TPAdViewOverlayConfig. This has
    /// no effect if the config or CTA title are @c nil.
    /// Triggers @c TPVideoEventClick event on click.
    TPAdOverlayClickthroughTypeCallToAction,

    /// Pass clicks through to the underlying content view.
    TPAdOverlayClickthroughTypePassthrough
};

typedef NS_ENUM(NSUInteger, TPAdOverlayEventType) {
    TPAdOverlayEventTypeSkip,
    TPAdOverlayEventTypeClose,
    TPAdOverlayEventTypeClick,
    TPAdOverlayEventTypeMute,
    TPAdOverlayEventTypeUnMute,
};

NS_ASSUME_NONNULL_BEGIN

@protocol TPAdViewOverlayDelegate <NSObject>

- (void)adViewOverlay:(TPAdViewOverlay *)overlay didTriggerEvent:(int)event;

- (void)adViewOverlayDidFinishCountdown:(TPAdViewOverlay *)overlay;

@end

@interface TPAdViewOverlay : UIView

@property (nonatomic, readonly) BOOL wasTapped;
@property (nonatomic, weak) id<TPAdViewOverlayDelegate> delegate;
@property (nonatomic, strong) NSDictionary *videoConfig;
#pragma mark - Timers
- (void)pause;
- (void)resume;
- (void)stopTimer;

#pragma mark - Controls

- (void)hideControls;
- (void)delayForDuration:(NSTimeInterval)duration showCountdownTimer:(BOOL)showCountdownTimer countdownTimerDelay:(NSTimeInterval)countdownTimerDelay;
- (void)showCloseButton;
- (void)showSkipButton;
#pragma mark - Clickthrough

@property (nonatomic, assign) TPAdOverlayClickthroughType clickthroughType;
@property (nonatomic, assign) NSString *callToActionButtonTitle;

#pragma mark - Industry Icon

- (void)showIndustryIcon;
- (void)hideIndustryIcon;

@end

NS_ASSUME_NONNULL_END
