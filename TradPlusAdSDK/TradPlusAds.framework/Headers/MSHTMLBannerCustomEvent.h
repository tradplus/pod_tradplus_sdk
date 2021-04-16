//
//  MSHTMLBannerCustomEvent.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import "MSBannerCustomEvent.h"
#import "MSAdWebViewAgent.h"
#import "MSPrivateBannerCustomEventDelegate.h"

@interface MSHTMLBannerCustomEvent : MSBannerCustomEvent <MSAdWebViewAgentDelegate>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-synthesis"
@property (nonatomic, weak) id<MSPrivateBannerCustomEventDelegate> delegate;
#pragma clang diagnostic pop

@end
