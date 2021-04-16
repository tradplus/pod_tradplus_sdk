#import <UIKit/UIKit.h>
#import "MSNativeAdRenderer.h"

@class MSNativeAdRendererConfiguration;
@class MSStaticNativeAdRendererSettings;

@interface MSStaticNativeAdRenderer : NSObject <MSNativeAdRenderer>

@property (nonatomic, readonly) MSNativeViewSizeHandler viewSizeHandler;

+ (MSNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<MSNativeAdRendererSettings>)rendererSettings;

- (void)changeRenderingViewClass:(Class)renderingViewClass;
@end
