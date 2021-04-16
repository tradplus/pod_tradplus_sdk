#import <Foundation/Foundation.h>

/**
 * The `MSNativeAdRequestTargeting` class is used to attach targeting information to
 * `MSNativeAdRequest` objects.
 */

@interface MSNativeAdRequestTargeting : NSObject

/** @name Creating a Targeting Object */

/**
 * Creates and returns an empty MSNativeAdRequestTargeting object.
 *
 * @return A newly initialized MSNativeAdRequestTargeting object.
 */
+ (MSNativeAdRequestTargeting *)targeting;

/** @name Targeting Parameters */

/**
 * A string representing a set of keywords that should be passed to the TradPlusAd ad server to receive
 * more relevant advertising.
 *
 * Keywords are typically used to target ad campaigns at specific user segments. They should be
 * formatted as comma-separated key-value pairs (e.g. "marital:single,age:24").
 *
 * On the TradPlusAd website, keyword targeting options can be found under the "Advanced Targeting"
 * section when managing campaigns.
 */
@property (nonatomic, copy) NSString *keywords;

/**
 * A set of defined strings that correspond to assets for the intended native ad
 * object. This set should contain only those assets that will be displayed in the ad.
 *
 * The TradPlusAd ad server will attempt to only return the assets in desiredAssets.
 */
@property (nonatomic, strong) NSSet *desiredAssets;

@end
