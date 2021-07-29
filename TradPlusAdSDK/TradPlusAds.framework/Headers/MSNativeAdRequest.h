//
//  MSNativeAdRequest.h
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class MSNativeAd;
@class MSNativeAdRequest;
@class MSNativeAdRequestTargeting;

typedef void(^MSNativeAdRequestHandler)(MSNativeAdRequest *request,
                                      MSNativeAd *response,
                                      NSError *error);

////////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * The `MSNativeAdRequest` class is used to manage individual requests to the TradPlusAd ad server for
 * native ads.
 *
 * @warning **Note:** This class is meant for one-off requests for which you intend to manually
 * process the native ad response. If you are using `MSTableViewAdPlacer` or
 * `MSCollectionViewAdPlacer` to display ads, there should be no need for you to use this class.
 */

@interface MSNativeAdRequest : NSObject

@property (nonatomic, strong) NSDictionary *dicAdConfig;

/** @name Targeting Information */

/**
 * An object representing targeting parameters that can be passed to the TradPlusAd ad server to
 * serve more relevant advertising.
 */
@property (nonatomic, strong) MSNativeAdRequestTargeting *targeting;

/** @name Initializing and Starting an Ad Request */

/**
 * Initializes a request object.
 *
 * @param identifier The ad unit identifier for this request. An ad unit is a defined placement in
 * your application set aside for advertising. Ad unit IDs are created on the TradPlusAd website.
 *
 * @param rendererConfigurations An array of MSNativeAdRendererConfiguration objects that control how
 * the native ad is rendered.
 *
 * @return An `MSNativeAdRequest` object.
 */
+ (MSNativeAdRequest *)requestWithAdUnitIdentifier:(NSString *)identifier rendererConfigurations:(NSArray *)rendererConfigurations;

/**
 * Executes a request to the TradPlusAd ad server.
 *
 * @param handler A block to execute when the request finishes. The block includes as parameters the
 * request itself and either a valid MSNativeAd or an NSError object indicating failure.
 */
- (void)startWithCompletionHandler:(MSNativeAdRequestHandler)handler;

/**
 * if it's TradPlusAd native, restart load, through original process.
 */
- (void)restartLoadAd;
- (void)templateNativeRender:(CGSize)size;

///MsNativeAdView 当被add时的事件 某些源需要在这时做展现或其他操作
- (void)nativeDidShow;

@end
