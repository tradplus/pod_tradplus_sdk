//
//  MSAdWebViewAgent.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSAdDestinationDisplayAgent.h"
#import "MSWebView.h"

enum {
    MSWebViewEventAdDidAppear     = 0,
    MSWebViewEventAdDidDisappear  = 1
};
typedef NSUInteger MSWebViewEvent;

@protocol MSAdWebViewAgentDelegate;

@class MSAdConfiguration;
@class MSWebView;

@interface MSAdWebViewAgent : NSObject <MSWebViewDelegate, MSAdDestinationDisplayAgentDelegate>

@property (nonatomic, strong) MSWebView *view;
@property (nonatomic, weak) id<MSAdWebViewAgentDelegate> delegate;

- (id)initWithAdWebViewFrame:(CGRect)frame delegate:(id<MSAdWebViewAgentDelegate>)delegate;
- (void)loadConfiguration:(MSAdConfiguration *)configuration;
- (void)rotateToOrientation:(UIInterfaceOrientation)orientation;
- (void)invokeJavaScriptForEvent:(MSWebViewEvent)event;
- (void)forceRedraw;

- (void)enableRequestHandling;
- (void)disableRequestHandling;

@end

@class MSWebView;

@protocol MSAdWebViewAgentDelegate <NSObject>

- (NSString *)adUnitId;
- (UIViewController *)viewControllerForPresentingModalView;
- (void)adDidClose:(MSWebView *)ad;
- (void)adDidFinishLoadingAd:(MSWebView *)ad;
- (void)adDidFailToLoadAd:(MSWebView *)ad;
- (void)adActionWillBegin:(MSWebView *)ad;
- (void)adActionWillLeaveApplication:(MSWebView *)ad;
- (void)adActionDidFinish:(MSWebView *)ad;

@end
