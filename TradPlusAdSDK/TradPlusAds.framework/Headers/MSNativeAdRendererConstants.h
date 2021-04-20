//
//  MSNativeAdRendererConstants.h
//  MsSDK
//
//  Copyright (c) 2016 TradPlusAd. All rights reserved.
//

/**
 *  Return this value from `MSNativeViewSizeHandler` when you want to display ad content that could
 *  have variable height and needs to be calculated only after ad properties are available. The
 *  implementation of ad view conforming to the `MSNativeAdRendering` protocol should implement
 *  `sizeThatFits:` and handle layout changes appropriately.
 */
FOUNDATION_EXPORT const CGFloat MSNativeViewDynamicDimension;
