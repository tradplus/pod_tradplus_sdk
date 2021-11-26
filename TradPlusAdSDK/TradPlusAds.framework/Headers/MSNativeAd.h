//
//  MSNativeAd.h
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol MSNativeAdAdapter;
@protocol MSNativeAdDelegate;
@protocol MSNativeAdRenderer;
@class MSAdConfiguration;

/**
 * The `MSNativeAd` class is used to render and manage events for a native advertisement. The
 * class provides methods for accessing native ad properties returned by the server, as well as
 * convenience methods for URL navigation and metrics-gathering.
 */

@interface MSNativeAd : NSObject

/** @name Ad Resources */

/**
 * The delegate of the `MSNativeAd` object.
 */
@property (nonatomic, weak) id<MSNativeAdDelegate> delegate;

/**
 * A dictionary representing the native ad properties.
 */
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, assign) BOOL isTemplateRender;
@property (nonatomic, strong) UIView *templateView;

///隐藏associatedView MyTarget Native 需要隐藏
@property (nonatomic,assign) BOOL hideAssociatedView;

- (instancetype)initWithAdAdapter:(id<MSNativeAdAdapter>)adAdapter;

/** @name Retrieving Ad View */

/**
 * Retrieves a rendered view containing the ad.
 *
 * @param error A pointer to an error object. If an error occurs, this pointer will be set to an
 * actual error object containing the error information.
 *
 * @return If successful, the method will return a view containing the rendered ad. The method will
 * return nil if it cannot render the ad data to a view.
 */
- (UIView *)retrieveAdViewWithError:(NSError **)error;
- (UIView *)retrieveYDAdViewWithError:(NSError **)error;
- (UIView *)retrieveAdViewWithError:(Class)renderingViewClass error:(NSError **)error;

- (void)trackMetricForURL:(NSURL *)URL;

@end
