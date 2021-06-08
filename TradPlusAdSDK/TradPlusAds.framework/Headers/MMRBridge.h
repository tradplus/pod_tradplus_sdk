#import <UIKit/UIKit.h>
#import "MMRConstants.h"
#import "MSWebView.h"

@class MMRProperty;
@protocol MMRBridgeDelegate;

@interface MMRBridge : NSObject

@property (nonatomic, assign) BOOL shouldHandleRequests;
@property (nonatomic, weak) id<MMRBridgeDelegate> delegate;

- (instancetype)initWithWebView:(MSWebView *)webView;

- (void)loadHTMLString:(NSString *)HTML baseURL:(NSURL *)baseURL;

- (void)fireReadyEvent;
- (void)fireChangeEventForProperty:(MMRProperty *)property;
- (void)fireChangeEventsForProperties:(NSArray *)properties;
- (void)fireErrorEventForAction:(NSString *)action withMessage:(NSString *)message;

/*
 * fireSizeChangeEvent: will always execute the javascript to notify mraid bridge that the size of the ad may have
 * changed. mraid.js will only fire the change event if the size has actually changed.
 */
- (void)fireSizeChangeEvent:(CGSize)size;

- (void)fireSetScreenSize:(CGSize)size;
- (void)fireSetPlacementType:(NSString *)placementType;
- (void)fireSetCurrentPositionWithPositionRect:(CGRect)positionRect;
- (void)fireSetDefaultPositionWithPositionRect:(CGRect)positionRect;
- (void)fireSetMaxSize:(CGSize)maxSize;

@end

/**
 * The delegate of an `MMRBridge` object that implements `MMRBridgeDelegate` must provide information
 * about the state of an MMRAID ad through `isLoadingAd` and `hasUserInteractedWithWebView` so `MMRBridge`
 * can correctly process web view events. The delegate will be notified of specific events that need
 * to be handled natively for an MMRAID ad. The delegate is also notified of most web view events so it
 * can perform necessary actions such as changing the ad's state.
 */
@protocol MMRBridgeDelegate <NSObject>

- (BOOL)isLoadingAd;
- (MMRAdViewPlacementType)placementType;
- (BOOL)hasUserInteractedWithWebViewForBridge:(MMRBridge *)bridge;
- (UIViewController *)viewControllerForPresentingModalView;

- (void)nativeCommandWillPresentModalView;
- (void)nativeCommandDidDismissModalView;

- (void)bridge:(MMRBridge *)bridge didFinishLoadingWebView:(MSWebView *)webView;
- (void)bridge:(MMRBridge *)bridge didFailLoadingWebView:(MSWebView *)webView error:(NSError *)error;

- (void)handleNativeCommandCloseWithBridge:(MMRBridge *)bridge;
- (void)bridge:(MMRBridge *)bridge performActionForTradPlusAdSpecificURL:(NSURL *)url;
- (void)bridge:(MMRBridge *)bridge handleDisplayForDestinationURL:(NSURL *)URL;
- (void)bridge:(MMRBridge *)bridge handleNativeCommandUseCustomClose:(BOOL)useCustomClose;
- (void)bridge:(MMRBridge *)bridge handleNativeCommandSetOrientationPropertiesWithForceOrientationMask:(UIInterfaceOrientationMask)forceOrientationMask;
- (void)bridge:(MMRBridge *)bridge handleNativeCommandExpandWithURL:(NSURL *)url useCustomClose:(BOOL)useCustomClose;
- (void)bridge:(MMRBridge *)bridge handleNativeCommandResizeWithParameters:(NSDictionary *)parameters;

@end
