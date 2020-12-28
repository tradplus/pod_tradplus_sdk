#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol MsNativeAdsDelegate;

@interface MsNativeAds : NSObject

@property (nonatomic, strong) Class defaultRenderingViewClass; //高级原生，默认的布局类
@property (nonatomic, weak, nullable) id<MsNativeAdsDelegate> delegate;
@property (nonatomic) BOOL isLoading;
//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
- (void)setAdUnitID:(NSString *)adUnitID;
- (void)loadAds; 

@end

@protocol MsNativeAdsDelegate <NSObject>
@required
//整个TradPlus广告位加载结束。
- (void)nativeAdsAllLoaded:(BOOL)isAdReady readyAds:(NSArray *)readyAds error:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
