#import <Foundation/Foundation.h>
#import <TradPlusAds/MSNativeAdRenderer.h>

NS_ASSUME_NONNULL_BEGIN

@class MSNativeAdRendererConfiguration;
@class MSStaticNativeAdRendererSettings;

@interface MintegralNativeAdRenderer : NSObject <MSNativeAdRenderer>

@property (nonatomic, readonly) MSNativeViewSizeHandler viewSizeHandler;

+ (MSNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<MSNativeAdRendererSettings>)rendererSettings;

@end

NS_ASSUME_NONNULL_END
