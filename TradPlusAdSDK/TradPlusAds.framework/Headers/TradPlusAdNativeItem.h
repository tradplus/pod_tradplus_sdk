
#import <Foundation/Foundation.h>
#import "TradPlusAdRes.h"
#import "TradPlusBaseAdapter.h"
#import "TradPlusAdWaterfallItem.h"
#import "TradPlusNativeRenderer.h"

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdNativeItem : NSObject

- (instancetype)initWithWaterfallItem:(TradPlusAdWaterfallItem *)item;

- (void)showAdWithSubView:(UIView *)subView renderer:(TradPlusNativeRenderer *)renderer;
///用于移除adView
- (void)clear;
@end

NS_ASSUME_NONNULL_END
