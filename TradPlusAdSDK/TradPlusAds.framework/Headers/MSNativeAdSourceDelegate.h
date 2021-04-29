//
//  MSNativeAdSourceDelegate.h
//  AdExpress
//
//  Copyright (c) 2016 TradPlusAd. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MSNativeAdSource;

@protocol MSNativeAdSourceDelegate <NSObject>

- (void)adSourceDidFinishRequest:(MSNativeAdSource *)source;

@end
