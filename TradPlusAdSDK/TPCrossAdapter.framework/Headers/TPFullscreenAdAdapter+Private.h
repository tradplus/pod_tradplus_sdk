#import <UIKit/UIKit.h>
#import "TPAdAdapterDelegate.h"
#import "TPAdContainerView.h"
#import "TPDiskLRUCache.h"
#import "TPFullscreenAdAdapter.h"
#import "TPFullscreenAdAdapterDelegate.h"
#import "TPImageLoader.h"
#import "TPFullscreenAdViewController.h"
#import <TradPlusAds/MSAdDestinationDisplayAgent.h>
#import "TPCrossEvent.h"
#import <TradPlusAds/MsCommon.h>

// Forward declarations of Swift objects required since it is not
// possible to import TradPlus-Swift.h from header files.
@class TPImageCreativeView;
@class TPResumableTimer;

NS_ASSUME_NONNULL_BEGIN

@interface TPFullscreenAdAdapter ()

#pragma mark - Common Properties

@property (nonatomic, assign) TPAdContentType adContentType;
@property (nonatomic, assign, readwrite) BOOL hasAdAvailable;
@property (nonatomic, strong) MSAdDestinationDisplayAgent *adDestinationDisplayAgent; // Note: only used for video and static image

// Once an ad successfully loads, we want to block sending more successful load events.
@property (nonatomic, assign) BOOL hasSuccessfullyLoaded;

// Since we only notify the application of one success per load, we also only notify the application
// of one expiration per success.
@property (nonatomic, assign) BOOL hasExpired;

@property (nonatomic, assign) BOOL hasTrackedImpression;
@property (nonatomic, assign) BOOL hasTrackedClick;
@property (nonatomic, assign) BOOL hasEndedImpression;
@property (nonatomic, assign) BOOL isUserRewarded;

@property (nonatomic, strong) TPFullscreenAdViewController * _Nullable viewController; // set to nil after dismissal

@property (nonatomic, strong) TPDiskLRUCache *mediaFileCache;
#pragma mark - (TPAdAdapter) Properties

@property (nonatomic, strong) NSString *adUnitId;
@property (nonatomic, copy) NSString *customData;
@property (nonatomic, weak) id<TPAdAdapterFullscreenEventDelegate> adapterDelegate;

#pragma mark - (TPFullscreenAdAdapterDelegate) Properties

@property (nonatomic, weak, readwrite) id<TPFullscreenAdAdapterDelegate> delegate; // default to `self` in `init`
@property (nonatomic, copy) NSDictionary *localExtras;

#pragma mark - Video Properties

#pragma mark - Image Properties

@property (nonatomic, strong) TPImageLoader *imageLoader;
@property (nonatomic, strong) UIImageView *imageCreativeView;

@property (nonatomic, strong) NSDate *dateLoadImageStart;
@property (nonatomic, strong) NSDate *dateLoadVideoStart;
#pragma mark - Methods


//- (void)startTimeoutTimer;

- (void)didLoadAd;

- (void)didStopLoadingAd;

- (void)handleAdEvent:(TPFullscreenAdEvent)event;

- (NSArray<NSURL *> * _Nullable)rewardedVideoCompletionUrlsByAppendingClientParams;
- (void)trackClick;
- (void)trackImpression;

@end

#pragma mark -

@interface TPFullscreenAdAdapter (TPAdContainerViewDelegate) <TPAdContainerViewDelegate>
@end

NS_ASSUME_NONNULL_END
