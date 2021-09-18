#import <UIKit/UIKit.h>
#import "TPFullscreenAdAdapter.h"

@protocol TPAdAdapter;

NS_ASSUME_NONNULL_BEGIN

@protocol TPAdAdapterBaseDelegate <NSObject>

- (void)adapter:(id<TPAdAdapter> _Nullable)adapter didFailToLoadAdWithError:(NSError * _Nullable)error;
- (void)adapter:(id<TPAdAdapter> _Nullable)adapter didFailToPlayAdWithError:(NSError *)error;
- (void)adDidReceiveImpressionEventForAdapter:(id<TPAdAdapter>)adapter;

@end

#pragma mark - Fullscreen

@protocol TPAdAdapterFullscreenEventDelegate <TPAdAdapterBaseDelegate>

- (void)adAdapter:(id<TPAdAdapter>)adapter handleFullscreenAdEvent:(TPFullscreenAdEvent)fullscreenAdEvent;

@end

NS_ASSUME_NONNULL_END
