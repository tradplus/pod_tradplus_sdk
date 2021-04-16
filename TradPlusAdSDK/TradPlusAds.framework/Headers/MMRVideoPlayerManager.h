//
// Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MMRVideoPlayerManagerDelegate;

@interface MMRVideoPlayerManager : NSObject

@property (nonatomic, weak) id<MMRVideoPlayerManagerDelegate> delegate;

- (id)initWithDelegate:(id<MMRVideoPlayerManagerDelegate>)delegate;
- (void)playVideo:(NSURL *)url;

@end

@protocol MMRVideoPlayerManagerDelegate <NSObject>

- (UIViewController *)viewControllerForPresentingVideoPlayer;
- (void)videoPlayerManagerWillPresentVideo:(MMRVideoPlayerManager *)manager;
- (void)videoPlayerManagerDidDismissVideo:(MMRVideoPlayerManager *)manager;
- (void)videoPlayerManager:(MMRVideoPlayerManager *)manager
        didFailToPlayVideoWithErrorMessage:(NSString *)message;

@end
