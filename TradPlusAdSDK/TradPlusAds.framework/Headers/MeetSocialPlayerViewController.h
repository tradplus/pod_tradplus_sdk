//
//  MeetSocialPlayerViewController.h
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MeetSocialPlayerView.h"

@class AVPlayerItem;
@class MeetSocialAVPlayer;
@class MeetSocialPlayerViewController;
@class MeetSocialNativeVideoAdConfigValues;
@class MSAdConfigurationLogEventProperties;
@class MSVASTTracking;
@class MSVideoConfig;

@protocol MeetSocialPlayerViewControllerDelegate <NSObject>

@optional

- (void)willEnterFullscreen:(MeetSocialPlayerViewController *)viewController;
- (void)playerPlaybackWillStart:(MeetSocialPlayerViewController *)player;
- (void)playerPlaybackDidStart:(MeetSocialPlayerViewController *)player;
- (void)playerDidProgressToTime:(NSTimeInterval)playbackTime;
- (void)playerViewController:(MeetSocialPlayerViewController *)playerViewController didTapReplayButton:(MeetSocialPlayerView *)view;
- (void)playerViewController:(MeetSocialPlayerViewController *)playerViewController willShowReplayView:(MeetSocialPlayerView *)view;
- (void)playerViewController:(MeetSocialPlayerViewController *)playerViewController didStall:(MeetSocialAVPlayer *)player;
- (void)playerViewController:(MeetSocialPlayerViewController *)playerViewController didRecoverFromStall:(MeetSocialAVPlayer *)player;

- (UIViewController *)viewControllerForPresentingModalView;

@end

@interface MeetSocialPlayerViewController : UIViewController

@property (nonatomic, readonly) NSURL *mediaURL;

@property (nonatomic, readonly) MeetSocialPlayerView *playerView;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) MeetSocialAVPlayer *avPlayer;
@property (nonatomic) MSVASTTracking *vastTracking;
@property (nonatomic, readonly) CGFloat videoAspectRatio;
@property (nonatomic, readonly) MeetSocialNativeVideoAdConfigValues *nativeVideoAdConfig;

#pragma mark - Configurations/States
@property (nonatomic) MeetSocialPlayerDisplayMode displayMode;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL startedLoading;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL isReadyToPlay;
@property (nonatomic) BOOL disposed;

#pragma - Call to action click tracking url
@property (nonatomic) NSURL *defaultActionURL;

@property (nonatomic, weak) id<MeetSocialPlayerViewControllerDelegate> delegate;

#pragma mark - Initializer
- (instancetype)initWithVideoConfig:(MSVideoConfig *)videoConfig nativeVideoAdConfig:(MeetSocialNativeVideoAdConfigValues *)nativeVideoAdConfig logEventProperties:(MSAdConfigurationLogEventProperties *)logEventProperties;
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
