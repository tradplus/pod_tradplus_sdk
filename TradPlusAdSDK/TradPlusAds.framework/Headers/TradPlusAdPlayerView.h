#import <UIKit/UIKit.h>
#import "TradPlusAdAVPlayer.h"

@class TradPlusAdPlayerView;

typedef NS_ENUM(NSUInteger, TradPlusAdPlayerDisplayMode) {
    TradPlusAdPlayerDisplayModeInline = 0,
    TradPlusAdPlayerDisplayModeFullscreen
};

@protocol TradPlusAdPlayerViewDelegate <NSObject>

- (void)playerViewDidTapReplayButton:(TradPlusAdPlayerView *)view;
- (void)playerViewWillShowReplayView:(TradPlusAdPlayerView *)view;
- (void)playerViewWillEnterFullscreen:(TradPlusAdPlayerView *)view;

@end

@interface TradPlusAdPlayerView : UIControl

@property (nonatomic) TradPlusAdAVPlayer *avPlayer;
@property (nonatomic) TradPlusAdPlayerDisplayMode displayMode;
@property (nonatomic, copy) NSString *videoGravity;

- (instancetype)initWithFrame:(CGRect)frame delegate:(id<TradPlusAdPlayerViewDelegate>)delegate;

- (void)createPlayerView;
- (void)playbackTimeDidProgress;
- (void)playbackDidFinish;
- (void)setProgressBarVisible:(BOOL)visible;
- (void)handleVideoInitFailure;

@end
