#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MMRConstants.h"

@class MMRCommand;
@protocol MMRNativeCommandHandlerDelegate;

/**
 * The `MMRNativeCommandHandler` class is an object that encapsulates functionality that processes,
 * and where possible, executes MMRAID commands.
 */
@interface MMRNativeCommandHandler : NSObject

- (instancetype)initWithDelegate:(id<MMRNativeCommandHandlerDelegate>)delegate;
- (void)handleNativeCommand:(NSString *)command withProperties:(NSDictionary *)properties;

@end

/**
 * The delegate of an `MMRNativeCommandHandler` object that implements `MMRNativeCommandHandlerDelegate`
 * must provide information and a view controller that allow the `MMRNativeCommandHandler` to execute
 * MMRAID commands. The `MMRNativeCommandHandlerDelegate` is also notified of certain events and
 * expected to respond appropriately to them.
 */
@protocol MMRNativeCommandHandlerDelegate <NSObject>

- (void)handleMRAIDUseCustomClose:(BOOL)useCustomClose;
- (void)handleMRAIDSetOrientationPropertiesWithForceOrientationMask:(UIInterfaceOrientationMask)forceOrientationMask;
- (void)handleMRAIDExpandWithParameters:(NSDictionary *)params;
- (void)handleMRAIDResizeWithParameters:(NSDictionary *)params;
- (void)handleMRAIDClose;
- (void)handleMRAIDOpenCallForURL:(NSURL *)URL;
- (void)nativeCommandWillPresentModalView;
- (void)nativeCommandDidDismissModalView;
- (void)nativeCommandCompleted:(NSString *)command;
- (void)nativeCommandFailed:(NSString *)command withMessage:(NSString *)message;
- (UIViewController *)viewControllerForPresentingModalView;
- (MMRAdViewPlacementType)adViewPlacementType;
- (BOOL)userInteractedWithWebView;
- (BOOL)handlingWebviewRequests;

@end
