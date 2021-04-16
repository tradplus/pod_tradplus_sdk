//
//  MSHTMLInterstitialViewController.h
//  AdExpress
//
//  Copyright (c) 2012 TradPlusAd, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MSAdWebViewAgent.h"
#import "MSInterstitialViewController.h"

@class MSAdConfiguration;

@interface MSHTMLInterstitialViewController : MSInterstitialViewController <MSAdWebViewAgentDelegate>

@property (nonatomic, strong) MSAdWebViewAgent *backingViewAgent;

- (void)loadConfiguration:(MSAdConfiguration *)configuration;

@end
