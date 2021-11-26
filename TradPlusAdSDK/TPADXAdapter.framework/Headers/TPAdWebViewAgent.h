//
//  TPAdWebViewAgent.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "TPAdDestinationDisplayAgent.h"
#import "TPWebView.h"

enum {
    TPWebViewEventAdDidAppear     = 0,
    TPWebViewEventAdDidDisappear  = 1
};
typedef NSUInteger TPWebViewEvent;

@protocol TPAdWebViewAgentDelegate;

@class TPAdConfiguration;
@class TPWebView;

@interface TPAdWebViewAgent : NSObject <TPWebViewDelegate>

@property (nonatomic, strong) TPWebView *view;
@property (nonatomic, weak) id<TPAdWebViewAgentDelegate> delegate;

- (id)initWithAdWebViewFrame:(CGRect)frame delegate:(id<TPAdWebViewAgentDelegate>)delegate;
- (void)loadHTMLBanner:(NSString *)htmlStr adSize:(CGSize)adSize info:(NSDictionary *)info;
- (void)rotateToOrientation:(UIInterfaceOrientation)orientation;
- (void)invokeJavaScriptForEvent:(TPWebViewEvent)event;
- (void)forceRedraw;

- (void)enableRequestHandling;
- (void)disableRequestHandling;

@end

@class TPWebView;

@protocol TPAdWebViewAgentDelegate <NSObject>

- (NSString *)adUnitId;
- (UIViewController *)viewControllerForPresentingModalView;
- (void)adDidClose:(TPWebView *)ad;
- (void)adDidFinishLoadingAd:(TPWebView *)ad;
- (void)adDidFailToLoadAd:(TPWebView *)ad;
- (void)adActionWillBegin:(TPWebView *)ad;
- (void)adActionWillLeaveApplication:(TPWebView *)ad;
- (void)adActionDidFinish:(TPWebView *)ad;

@end
