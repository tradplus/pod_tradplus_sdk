#import <Foundation/Foundation.h>

@class MSNativeAd;

@interface MSNativeAdData : NSObject

@property (nonatomic, copy) NSString *adUnitID;
@property (nonatomic, strong) MSNativeAd *ad;

@end
