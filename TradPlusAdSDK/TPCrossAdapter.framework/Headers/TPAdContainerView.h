#import <UIKit/UIKit.h>
#import "TPAdViewConstant.h"
#import "TPVideoPlayer.h"
#import "TPVideoPlayerDelegate.h"
#import "TPVideoPlayerView.h"
#import "TPAdViewOverlay.h"
#import "TPEndCardView.h"

typedef NS_ENUM(NSUInteger, TPAdExperienceState) {
    /*
     The ad experience has not started.
     */
    TPAdExperienceStateNotStarted = 0,

    /*
     The ad experience has started.
     */
    TPAdExperienceStateStarted,

    /*
     The ad experience has finished and the close button has been shown.
     */
    TPAdExperienceStateFinished
};

NS_ASSUME_NONNULL_BEGIN

@protocol TPAdContainerViewDelegate;

@interface TPAdContainerView : UIView<TPEndCardViewDelegate>
@property (nonatomic, assign) BOOL isVideoFinished; // default to NO

@property (nonatomic, strong) TPAdViewOverlay *overlay;
@property (nonatomic, strong) UIImageView *imageCreativeView;
@property (nonatomic, strong) TPEndCardView *endCardView;
@property (nonatomic, strong) NSDictionary *videoConfig;
#pragma mark - Video
@property (nonatomic, strong, nullable) TPVideoPlayerView *videoPlayerView;

#pragma mark - Creative Experiences

@property (nonatomic, assign) TPAdExperienceState adExperienceState;

@property (nonatomic, assign) NSUInteger adIndex;
@property (nonatomic, assign, readonly) NSTimeInterval countdownTimeForCurrentAdIndex;


@property (nonatomic, readonly) BOOL wasTapped;
@property (nonatomic, weak) id<TPVideoPlayerDelegate> videoPlayerDelegate; // only for video ads
@property (nonatomic, weak) id<TPAdContainerViewDelegate> delegate; // For all ad types

- (instancetype)initWithFrame:(CGRect)frame imageCreativeView:(UIImageView *)imageCreativeView;

- (void)hideControls;
- (void)showCloseButton;
- (void)startAdExperience;
- (void)hideOverlay;

@end

#pragma mark -

@interface TPAdContainerView (TPVideoPlayer) <TPVideoPlayer>
@property (nonatomic, readonly) TPVideoPlayerView *videoPlayerView;

- (void)resume;

@end

@protocol TPAdContainerViewDelegate <NSObject>

- (void)containerViewAdExperienceDidFinish:(TPAdContainerView *)containerView;

- (void)containerViewAdEndCardViewClick;
- (void)containerViewAdEndCardViewClose;
- (void)containerViewAdEndCardViewImageLoadSuccess;
- (void)containerViewAdEndCardViewImageLoadFail;

@end


NS_ASSUME_NONNULL_END
