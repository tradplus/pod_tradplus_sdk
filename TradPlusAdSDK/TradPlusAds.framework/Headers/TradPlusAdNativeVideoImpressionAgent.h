#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TradPlusAdNativeVideoImpressionAgent : NSObject

- (instancetype)initWithVideoView:(UIView *)videoView requiredVisibilityPercentage:(CGFloat)visiblePercentage requiredPlaybackDuration:(NSTimeInterval)playbackDuration;

- (BOOL)shouldTrackImpressionWithCurrentPlaybackTime:(NSTimeInterval)currentPlaybackTime;

@end
