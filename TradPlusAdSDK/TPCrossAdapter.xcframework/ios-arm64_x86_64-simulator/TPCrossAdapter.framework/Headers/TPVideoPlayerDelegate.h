#import <UIKit/UIKit.h>
#import "TPVideoPlayer.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TPVideoPlayerDelegate <NSObject>

#pragma mark - Video Player View

- (UIViewController *)viewControllerForPresentingModalMRAIDExpandedView;

- (void)videoPlayerDidLoadVideo:(id<TPVideoPlayer>)videoPlayer;

- (void)videoPlayerDidFailToLoadVideo:(id<TPVideoPlayer>)videoPlayer error:(NSError *)error;

- (void)videoPlayerDidStartVideo:(id<TPVideoPlayer>)videoPlayer duration:(NSTimeInterval)duration;

- (void)videoPlayerDidCompleteVideo:(id<TPVideoPlayer>)videoPlayer duration:(NSTimeInterval)duration;

- (void)videoPlayer:(id<TPVideoPlayer>)videoPlayer
videoDidReachProgressTime:(NSTimeInterval)videoProgress
           duration:(NSTimeInterval)duration;

- (void)videoPlayer:(id<TPVideoPlayer>)videoPlayer
    didTriggerEvent:(int)event
      videoProgress:(NSTimeInterval)videoProgress;

#pragma mark - Industry Icon View

- (void)videoPlayer:(id<TPVideoPlayer>)videoPlayer;

- (void)videoPlayer:(id<TPVideoPlayer>)videoPlayer
overridingClickThroughURL:(NSURL * _Nullable)url;

#pragma mark - Interruptions

- (void)videoPlayerAudioInterruptionDidBegin:(id<TPVideoPlayer>)videoPlayer;

- (void)videoPlayerAudioInterruptionDidEnd:(id<TPVideoPlayer>)videoPlayer;

@end

NS_ASSUME_NONNULL_END
