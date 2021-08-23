//
//  VungleNativeAdRenderer.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/7/1.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/MSNativeAdRenderer.h>

NS_ASSUME_NONNULL_BEGIN

@interface VungleNativeAdRenderer : NSObject<MSNativeAdRenderer>

@property (nonatomic, readonly) MSNativeViewSizeHandler viewSizeHandler;
+ (MSNativeAdRendererConfiguration *)rendererConfigurationWithRendererSettings:(id<MSNativeAdRendererSettings>)rendererSettings;
@end

NS_ASSUME_NONNULL_END
