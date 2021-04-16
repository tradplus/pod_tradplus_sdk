#import <Foundation/Foundation.h>
@class MSNativeAdRequestTargeting;
@class MSNativeAd;

@protocol TPNativeAdSourceQueueDelegate;

@interface TPNativeAdSourceQueue : NSObject

@property (nonatomic, weak) id <TPNativeAdSourceQueueDelegate> delegate;
//@property (nonatomic, strong) Class renderingViewClass; //高级原生，自定义布局时提供布局类
//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;

- (instancetype)initWithAdUnitIdentifier:(NSString *)identifier rendererConfigurations:(NSArray *)rendererConfigurations andTargeting:(MSNativeAdRequestTargeting *)targeting;
- (MSNativeAd *)dequeueAdWithMaxAge:(NSTimeInterval)age;
- (NSUInteger)count;
- (void)loadAds;
- (void)cancelRequests;

@end

@protocol TPNativeAdSourceQueueDelegate <NSObject>

- (void)adSourceQueueAdIsAvailable:(TPNativeAdSourceQueue *)source;

@end
