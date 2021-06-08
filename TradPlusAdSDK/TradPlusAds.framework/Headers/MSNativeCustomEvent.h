#import "MSNativeCustomEventDelegate.h"

@interface MSNativeCustomEvent : NSObject

- (void)requestAdWithCustomEventInfo:(NSDictionary *)info;
- (void)requestAdWithCustomEventInfo:(NSDictionary *)info renderViewClass:(Class)renderViewClass;

/** @name Caching Image Resources */

/**
 * Downloads and pre-caches images.
 *
 * If your ad network does not provide built-in support for image caching, you may invoke this
 * method in your custom event implementation to pre-cache image assets. If you do call this method,
 * you should wait until the completion block is called before invoking the appropriate
 * success or failure callbacks on the `MSNativeCustomEventDelegate`.
 *
 * @param imageURLs An array of `NSURL` objects representing image resource locations.
 * @param completionBlock A block that will be called after all download operations are complete.
 * If any image downloads do not complete successfully, the `errors` parameter will contain
 * error information about the failures.
 */
- (void)precacheImagesWithURLs:(NSArray *)imageURLs completionBlock:(void (^)(NSArray *errors))completionBlock;

/** @name Communicating with the TradPlusAd SDK */

/**
 * The `MSNativeCustomEventDelegate` receives messages concerning the status of loading a native ad.
 *
 * The `delegate` object defines several methods that you should call in order to inform TradPlusAd
 * of the progress of your custom event.
 */
@property (nonatomic, weak) id<MSNativeCustomEventDelegate> delegate;

@end
