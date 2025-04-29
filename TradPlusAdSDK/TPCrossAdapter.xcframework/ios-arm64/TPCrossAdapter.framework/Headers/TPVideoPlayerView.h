#import <UIKit/UIKit.h>
#import "TPVideoPlayer.h"

NS_ASSUME_NONNULL_BEGIN

// Forward declaration
@protocol TPVideoPlayerViewDelegate;

@interface TPVideoPlayerView : UIView <TPVideoPlayer>

@property (nonatomic, weak) id<TPVideoPlayerViewDelegate> delegate;
@property (nonatomic, readonly) BOOL isVideoLoaded;
@property (nonatomic, readonly) BOOL isVideoPlaying;
@property (nonatomic, readonly) NSTimeInterval videoDuration;
@property (nonatomic, readonly) NSTimeInterval videoProgress;
@property (nonatomic, readonly) float videoVolume;
@property (nonatomic, strong) NSDictionary *videoConfig;

- (void)skipToEnd;
- (void)playerMute:(BOOL)mute;

@end

#pragma mark - TPVideoPlayerViewDelegate

@protocol TPVideoPlayerViewDelegate <NSObject>

- (void)videoPlayerViewDidLoadVideo:(TPVideoPlayerView *)videoPlayerView;
- (void)videoPlayerViewDidFailToLoadVideo:(TPVideoPlayerView *)videoPlayerView error:(NSError *)error;
- (void)videoPlayerViewDidStartVideo:(TPVideoPlayerView *)videoPlayerView duration:(NSTimeInterval)duration;
- (void)videoPlayerViewDidCompleteVideo:(TPVideoPlayerView *)videoPlayerView duration:(NSTimeInterval)duration;
- (void)videoPlayerView:(TPVideoPlayerView *)videoPlayerView
            videoDidReachProgressTime:(NSTimeInterval)videoProgress
               duration:(NSTimeInterval)duration;
- (void)videoPlayerView:(TPVideoPlayerView *)videoPlayerView
        didTriggerEvent:(int)event
          videoProgress:(NSTimeInterval)videoProgress;
- (void)videoPlayerView:(TPVideoPlayerView *)videoPlayerView
       showIndustryIcon:(int)icon;
- (void)videoPlayerViewHideIndustryIcon:(TPVideoPlayerView *)videoPlayerView;

#pragma mark - Interruptions

- (void)videoPlayerViewAudioInterruptionDidBegin:(id<TPVideoPlayer>)videoPlayer;

- (void)videoPlayerViewAudioInterruptionDidEnd:(id<TPVideoPlayer>)videoPlayer;

@end

NS_ASSUME_NONNULL_END
