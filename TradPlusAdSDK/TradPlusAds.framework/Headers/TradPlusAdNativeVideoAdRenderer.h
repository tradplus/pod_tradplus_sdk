//
//  TradPlusAdNativeVideoAdRenderer.h
//  Copyright (c) 2015 TradPlusAd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MSNativeAdRenderer.h"

@class MSNativeAdRendererConfiguration;
@class MSStaticNativeAdRendererSettings;

@interface TradPlusAdNativeVideoAdRenderer : NSObject

@property (nonatomic, readonly) MSNativeViewSizeHandler viewSizeHandler;

+ (MSNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<MSNativeAdRendererSettings>)rendererSettings;

@end