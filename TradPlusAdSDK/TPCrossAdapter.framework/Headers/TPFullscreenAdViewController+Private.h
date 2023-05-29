#import <UIKit/UIKit.h>
#import <TradPlusAds/MsCommon.h>
#import "TPCrossEvent.h"
#import "TPAdContainerView.h"
#import "TPFullscreenAdViewController.h"
#import <TradPlusAds/MSTimer.h>
#import <TradPlusAds/MSLogging.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPFullscreenAdViewController ()

#pragma mark - Common Properties

@property (nonatomic, assign) TPAdContentType adContentType;
@property (nonatomic, strong) TPAdContainerView *adContainerView;
@property (nonatomic, strong) NSDictionary *videoConfig;

//for splash
@property (nonatomic, assign) int countToDownZero;
@property (nonatomic, assign) BOOL isSkipable;
@property (nonatomic, strong) UIButton *buttonSkip;
@property (nonatomic, strong) MSTimer *countdownTimer;
#pragma mark - (Video) Properties

@property (nonatomic, weak) id<TPVideoPlayerDelegate> videoPlayerDelegate;

#pragma mark - Interruptions

@property (nonatomic, assign) TPFullscreenAdInterruption interruptions;

- (void)appDidEnterBackground:(NSNotification *)notification;
- (void)appWillEnterForeground:(NSNotification *)notification;

@end

NS_ASSUME_NONNULL_END
