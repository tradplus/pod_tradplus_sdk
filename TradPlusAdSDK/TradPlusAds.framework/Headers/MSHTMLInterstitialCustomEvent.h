//
//  MSHTMLInterstitialCustomEvent.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import "MSInterstitialCustomEvent.h"
#import "MSHTMLInterstitialViewController.h"
#import "MSPrivateInterstitialCustomEventDelegate.h"

@interface MSHTMLInterstitialCustomEvent : MSInterstitialCustomEvent <MSInterstitialViewControllerDelegate>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-synthesis"
@property (nonatomic, weak) id<MSPrivateInterstitialCustomEventDelegate> delegate;
#pragma clang diagnostic pop

@end
