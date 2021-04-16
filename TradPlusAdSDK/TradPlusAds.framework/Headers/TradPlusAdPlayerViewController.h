#import <Foundation/Foundation.h>
#import "TradPlusAdPlayerView.h"

@class AVPlayerItem;
@class TradPlusAdAVPlayer;
@class TradPlusAdPlayerViewController;
@class TradPlusAdNativeVideoAdConfigValues;
@class MSAdConfigurationLogEventProperties;
@class MSVASTTracking;
@class MSVideoConfig;

@protocol TradPlusAdPlayerViewControllerDelegate <NSObject>

@optional

- (void)willEnterFullscreen:(TradPlusAdPlayerViewController *)viewController;
- (void)playerPlaybackWillStart:(TradPlusAdPlayerViewController *)player;
- (void)playerPlaybackDidStart:(TradPlusAdPlayerViewController *)player;
- (void)playerDidProgressToTime:(NSTimeInterval)playbackTime;
- (void)playerViewController:(TradPlusAdPlayerViewController *)playerViewController didTapReplayButton:(TradPlusAdPlayerView *)view;
- (void)playerViewController:(TradPlusAdPlayerViewController *)playerViewController willShowReplayView:(TradPlusAdPlayerView *)view;
- (void)playerViewController:(TradPlusAdPlayerViewController *)playerViewController didStall:(TradPlusAdAVPlayer *)player;
- (void)playerViewController:(TradPlusAdPlayerViewController *)playerViewController didRecoverFromStall:(TradPlusAdAVPlayer *)player;

- (UIViewController *)viewControllerForPresentingModalView;

@end

@interface TradPlusAdPlayerViewController : UIViewController

@property (nonatomic, readonly) NSURL *mediaURL;

@property (nonatomic, readonly) TradPlusAdPlayerView *playerView;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) TradPlusAdAVPlayer *avPlayer;
@property (nonatomic) MSVASTTracking *vastTracking;
@property (nonatomic, readonly) CGFloat videoAspectRatio;
@property (nonatomic, readonly) TradPlusAdNativeVideoAdConfigValues *nativeVideoAdConfig;

#pragma mark - Configurations/States
@property (nonatomic) TradPlusAdPlayerDisplayMode displayMode;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL startedLoading;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL isReadyToPlay;
@property (nonatomic) BOOL disposed;

#pragma - Call to action click tracking url
@property (nonatomic) NSURL *defaultActionURL;

@property (nonatomic, weak) id<TradPlusAdPlayerViewControllerDelegate> delegate;

#pragma mark - Initializer
- (instancetype)initWithVideoConfig:(MSVideoConfig *)videoConfig nativeVideoAdConfig:(TradPlusAdNativeVideoAdConfigValues *)nativeVideoAdConfig logEventProperties:(MSAdConfigurationLogEventProperties *)logEventProperties;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (void)loadAndPlayVideo;
- (void)seekToTime:(NSTimeInterval)time;
- (void)pause;
- (void)resume;
- (void)dispose;

- (BOOL)shouldStartNewPlayer;
- (BOOL)shouldResumePlayer;
- (BOOL)shouldPausePlayer;

- (void)willEnterFullscreen;
- (void)willExitFullscreen;

@end
