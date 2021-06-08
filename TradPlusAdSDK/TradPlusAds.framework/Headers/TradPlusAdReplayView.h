#import <UIKit/UIKit.h>
#import "TradPlusAdPlayerView.h"

@class TradPlusAdReplayView;

typedef void (^MSBReplayActionBlock)(TradPlusAdReplayView *replayView);

@interface TradPlusAdReplayView : UIView

@property (nonatomic, copy) MSBReplayActionBlock actionBlock;

- (instancetype)initWithFrame:(CGRect)frame displayMode:(TradPlusAdPlayerDisplayMode)displayMode;

@end
