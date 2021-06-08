#import <Foundation/Foundation.h>

@protocol MSNativeAdRendererSettings;

@interface MSNativeAdRendererConfiguration : NSObject

/*
 * The settings that inform the ad renderer about how it should render the ad.
 */
@property (nonatomic, strong) id<MSNativeAdRendererSettings> rendererSettings;

/*
 * The renderer class used to render supported custom events.
 */
@property (nonatomic, assign) Class rendererClass;

/*
 * An array of custom event class names (as strings) that the renderClass can
 * render.
 */
@property (nonatomic, strong) NSArray *supportedCustomEvents;

@end
