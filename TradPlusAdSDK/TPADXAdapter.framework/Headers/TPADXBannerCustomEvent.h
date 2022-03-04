#import <TradPlusAds/MSBannerCustomEvent.h>
#import <TradPlusAds/MSPrivateBannerCustomEventDelegate.h>
//#import <TradPlusAds/MSAdWebViewAgent.h>
#import "TPWebView.h"
#import "TPAdWebViewAgent.h"

@interface TPADXBannerCustomEvent : MSBannerCustomEvent <TPAdWebViewAgentDelegate>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-synthesis"
@property (nonatomic, weak) id<MSPrivateBannerCustomEventDelegate> delegate;
#pragma clang diagnostic pop

@end
