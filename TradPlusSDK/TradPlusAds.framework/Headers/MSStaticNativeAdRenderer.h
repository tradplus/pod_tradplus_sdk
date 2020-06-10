//
//  MSStaticNativeAdRenderer.h
//  MsSDK
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MSNativeAdRenderer.h"

@class MSNativeAdRendererConfiguration;
@class MSStaticNativeAdRendererSettings;

@interface MSStaticNativeAdRenderer : NSObject <MSNativeAdRenderer>

@property (nonatomic, readonly) MSNativeViewSizeHandler viewSizeHandler;

- (void)changeRenderingViewClass:(Class)renderingViewClass;
+ (MSNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<MSNativeAdRendererSettings>)rendererSettings;

@end
