//
//  MeetSocialNativeVideoAdRenderer.h
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MSNativeAdRenderer.h"

@class MSNativeAdRendererConfiguration;
@class MSStaticNativeAdRendererSettings;

@interface MeetSocialNativeVideoAdRenderer : NSObject

@property (nonatomic, readonly) MSNativeViewSizeHandler viewSizeHandler;

+ (MSNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<MSNativeAdRendererSettings>)rendererSettings;

@end
