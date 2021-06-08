#import <Foundation/Foundation.h>
@class MSNativeAdRequestTargeting;
@class MSNativeAd;

@protocol MSNativeAdSourceQueueDelegate;

@interface MSNativeAdSourceQueue : NSObject

@property (nonatomic, weak) id <MSNativeAdSourceQueueDelegate> delegate;


- (instancetype)initWithAdUnitIdentifier:(NSString *)identifier rendererConfigurations:(NSArray *)rendererConfigurations andTargeting:(MSNativeAdRequestTargeting *)targeting;
- (MSNativeAd *)dequeueAdWithMaxAge:(NSTimeInterval)age;
- (NSUInteger)count;
- (void)loadAds;
- (void)cancelRequests;

@end

@protocol MSNativeAdSourceQueueDelegate <NSObject>

- (void)adSourceQueueAdIsAvailable:(MSNativeAdSourceQueue *)source;

@end
