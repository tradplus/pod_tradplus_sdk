#import <UIKit/UIKit.h>
#import "TPAdViewConstant.h"
#import "TPCountdownTimerView.h"

@class TPResumableTimer;

typedef NS_ENUM(NSUInteger, TPAdOverlayControlState) {
    /// No control is being shown.
    TPAdOverlayControlStateNone,

    /// A countdown timer is being shown (whether hidden or not).
    TPAdOverlayControlStateCountdown,

    /// The skip button is being shown.
    TPAdOverlayControlStateSkipButton,

    /// The close button is being shown.
    TPAdOverlayControlStateCloseButton,
};

@interface TPAdViewOverlay () <UIGestureRecognizerDelegate>

@property (nonatomic, strong) UIGestureRecognizer *clickThroughGestureRecognizer;

// UI elements that are considered friendly Viewability obstructions.
// All of the views must conform to `TPViewabilityObstruction`.
@property (nonatomic, strong) UIButton *callToActionButton; // located at the bottom-right corner
@property (nonatomic, strong) UIButton *closeButton; // located at the top-right corner by default, created during `init`
@property (nonatomic, strong) UIButton *skipButton; // located at the top-right corner
@property (nonatomic, strong) UIButton *soundButton; 
@property (nonatomic, strong) NSArray<NSLayoutConstraint *> *closeButtonConstraints;
@property (nonatomic, strong) NSLayoutConstraint *iconViewWidthConstraint;
@property (nonatomic, strong) NSLayoutConstraint *iconViewHeightConstraint;
@property (nonatomic, strong) TPCountdownTimerView *timerView; // located at the top-right corner
@property (nonatomic, assign) TPAdOverlayControlState controlState;
@property (nonatomic, strong) TPResumableTimer *countdownDelayTimer;

@end
