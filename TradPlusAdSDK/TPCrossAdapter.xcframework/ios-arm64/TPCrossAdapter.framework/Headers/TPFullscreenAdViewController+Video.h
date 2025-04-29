#import <UIKit/UIKit.h>
#import "TPFullscreenAdViewController.h"
#import "TPVideoPlayer.h"
#import "TPVideoPlayerDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface TPFullscreenAdViewController (Video)  <TPVideoPlayer>

@property (nonatomic, weak) id<TPVideoPlayerDelegate> videoPlayerDelegate; // backing storage at "+Private.h"

@end

NS_ASSUME_NONNULL_END
