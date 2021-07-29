#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class MSNativeAd;
@class MSNativeCustomEvent;

/**
 * Instances of your custom subclass of `MSNativeCustomEvent` will have an
 * `MSNativeCustomEventDelegate` delegate object. You use this delegate to communicate progress
 * (such as whether an ad has loaded successfully) back to the TradPlusAd SDK.
 */
@protocol MSNativeCustomEventDelegate <NSObject>

/**
 * This method is called when the ad and all required ad assets are loaded.
 *
 * @param event You should pass `self` to allow the TradPlusAd SDK to associate this event with the
 * correct instance of your custom event.
 * @param adObject An `MSNativeAd` object, representing the ad that was retrieved.
 */
- (void)nativeCustomEvent:(MSNativeCustomEvent *)event didLoadAd:(MSNativeAd *)adObject;

/**
 * This method is called when the ad or any required ad assets fail to load.
 *
 * @param event You should pass `self` to allow the TradPlusAd SDK to associate this event with the
 * correct instance of your custom event.
 * @param error (*optional*) You may pass an error describing the failure.
 */
- (void)nativeCustomEvent:(MSNativeCustomEvent *)event didFailToLoadAdWithError:(NSError *)error;

@end
