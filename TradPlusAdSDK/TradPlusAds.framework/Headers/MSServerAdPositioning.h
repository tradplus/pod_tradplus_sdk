#import "MSAdPositioning.h"

@interface MSServerAdPositioning : MSAdPositioning

/** @name Creating a Server Positioning Object */

/**
 * Creates and returns a server positioning object.
 *
 * When an ad placer is set to use server positioning, it will ask the TradPlusAd ad server for the
 * positions where ads should be inserted into a given stream. These positioning values are
 * configurable on the TradPlusAd website.
 *
 * @return The newly created positioning object.
 *
 * @see MSClientAdPositioning
 */
+ (instancetype)positioning;

@end
