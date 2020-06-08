//
//  MeetSocialFullscreenPlayerViewController.h
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MeetSocialPlayerViewController;
@class MeetSocialPlayerView;
@class MeetSocialFullscreenPlayerViewController;

@protocol MeetSocialFullscreenPlayerViewControllerDelegate <NSObject>

- (void)playerDidProgressToTime:(NSTimeInterval)playbackTime;
- (void)ctaTapped:(MeetSocialFullscreenPlayerViewController *)viewController;
- (void)fullscreenPlayerWillLeaveApplication:(MeetSocialFullscreenPlayerViewController *)viewController;

@end

typedef void (^MeetSocialFullScreenPlayerViewControllerDismissBlock)(UIView *originalParentView);

@interface MeetSocialFullscreenPlayerViewController : UIViewController

@property (nonatomic) MeetSocialPlayerView *playerView;

@property (nonatomic, weak) id<MeetSocialFullscreenPlayerViewControllerDelegate> delegate;

- (instancetype)initWithVideoPlayer:(MeetSocialPlayerViewController *)playerController dismissBlock:(MeetSocialFullScreenPlayerViewControllerDismissBlock)dismiss;

@end
