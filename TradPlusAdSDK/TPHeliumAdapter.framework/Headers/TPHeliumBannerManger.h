//
//  TPHeliumBannerManger.h
//  fluteSDKSample
//
//  Created by xuejun on 2022/8/1.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HeliumSdk/HeliumSdk.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TPHeliumBannerMangerDelegate <NSObject>

- (void)bannerLoaded:(NSDictionary *)bidInfo;
- (void)bannerLoadWithError:(HeliumError *)error;
- (void)bannerDidClick;
@end;

@interface TPHeliumBannerManger : NSObject

+ (TPHeliumBannerManger *)sharedInstance;

- (HeliumBannerView *)getBannerViewWithPlacementId:(NSString *)placementId ad_size:(NSInteger)ad_size;

- (void)setDelegate:(id <TPHeliumBannerMangerDelegate>)delegate placementId:(NSString *)placementId;

- (void)removeDelegateWithPlacementId:(NSString *)placementId;

@end

NS_ASSUME_NONNULL_END
