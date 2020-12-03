#import <Foundation/Foundation.h>
#import <TradPlusAds/MSNativeCustomEvent.h>

NS_ASSUME_NONNULL_BEGIN

@interface PangleNativeCustomEvent : MSNativeCustomEvent

- (void)requestAdWithCustomEventInfo:(NSDictionary *)info;

@end

NS_ASSUME_NONNULL_END
