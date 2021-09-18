#import <TradPlusAds/MSAdDestinationDisplayAgent.h>
#import "TPFullscreenAdAdapter.h"
#import "TPVideoPlayerDelegate.h"
#import "TPFullscreenAdViewControllerDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface TPFullscreenAdAdapter (Video) 

- (void)fetchAndLoadVideoAd;

@end

#pragma mark -

@interface TPFullscreenAdAdapter (MSAdDestinationDisplayAgentDelegate) <MSAdDestinationDisplayAgentDelegate>
@end

@interface TPFullscreenAdAdapter (TPVideoPlayerDelegate) <TPVideoPlayerDelegate>
@end

NS_ASSUME_NONNULL_END
