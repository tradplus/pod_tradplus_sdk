#import <UIKit/UIKit.h>
#import "TPFullscreenAdAdapterDelegate.h"
#import "TPFullscreenAdViewControllerDelegate.h"
#import "TPImageLoader.h"
#import <StoreKit/StoreKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TPFullscreenAdEvent) {
    TPFullscreenAdEventDidLoad,
    TPFullscreenAdEventDidExpire,
    TPFullscreenAdEventDidReceiveTap,
    TPFullscreenAdEventWillLeaveApplication,
    TPFullscreenAdEventWillPresent,
    TPFullscreenAdEventDidPresent,
    TPFullscreenAdEventWillAppear,
    TPFullscreenAdEventDidAppear,
    TPFullscreenAdEventWillDisappear,
    TPFullscreenAdEventDidDisappear,
    TPFullscreenAdEventWillDismiss,
    TPFullscreenAdEventDidDismiss
};

@protocol TPFullscreenAdAdapter

@property (nonatomic, readonly) BOOL enableAutomaticImpressionAndClickTracking;
@property (nonatomic, readonly) BOOL isRewardExpected;
@property (nonatomic, assign, readonly) BOOL hasAdAvailable;

- (void)requestAdWithAdapterInfo:(NSDictionary *)info adMarkup:(NSString * _Nullable)adMarkup;
- (void)presentAdFromViewController:(UIViewController *)viewController;
- (void)handleDidPlayAd;
- (void)handleDidInvalidateAd;
@property (nonatomic, weak, readonly) id<TPFullscreenAdAdapterDelegate> delegate;

@end

#pragma mark -

@interface TPFullscreenAdAdapter : NSObject<SKStoreProductViewControllerDelegate, TPFullscreenAdViewControllerAppearanceDelegate, TPImageLoaderDelegate>
@property (nonatomic, strong) NSDictionary *videoConfig;
@end

#pragma mark -

@interface TPFullscreenAdAdapter (TPFullscreenAdAdapter) <TPFullscreenAdAdapter>
@end

NS_ASSUME_NONNULL_END
