
#import <TradPlusAds/MSNativeAdRenderer.h>
#import <TradPlusAds/MSNativeAdRendererSettings.h>

@class MSNativeAdRendererConfiguration;
@class MSStaticNativeAdRendererSettings;

@interface MSGoogleAdMobNativeRenderer : NSObject <MSNativeAdRendererSettings>

/// The viewSizeHandler is used to allow the app to configure its native ad view size.
@property(nonatomic, readwrite, copy) MSNativeViewSizeHandler viewSizeHandler;

/// Constructs and returns an MPNativeAdRendererConfiguration object specific for the
/// MPGoogleAdMobNativeRenderer. You must set all the properties on the configuration object.
/// @param rendererSettings Application defined settings.
/// @return A configuration object for MPGoogleAdMobNativeRenderer.
+ (MSNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:
    (id<MSNativeAdRendererSettings>)rendererSettings;

- (void)changeRenderingViewClass:(Class)renderingViewClass;
@end
