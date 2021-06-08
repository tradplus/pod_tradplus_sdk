#import <Foundation/Foundation.h>
#import "MSNativeAdSourceDelegate.h"
@class MSNativeAdRequestTargeting;

@interface MSNativeAdSource : NSObject

@property (nonatomic, weak) id <MSNativeAdSourceDelegate> delegate;

+ (instancetype)source;
- (void)loadAdsWithAdUnitIdentifier:(NSString *)identifier rendererConfigurations:(NSArray *)rendererConfigurations andTargeting:(MSNativeAdRequestTargeting *)targeting;
- (void)deleteCacheForAdUnitIdentifier:(NSString *)identifier;
- (id)dequeueAdForAdUnitIdentifier:(NSString *)identifier;


@end
