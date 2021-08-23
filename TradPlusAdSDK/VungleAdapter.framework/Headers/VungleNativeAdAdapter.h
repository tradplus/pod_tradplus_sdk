//
//  VungleNativeAdAdapter.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/7/1.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/MSNativeAdAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@interface VungleNativeAdAdapter : NSObject <MSNativeAdAdapter>

- (instancetype)initWithPlacementId:(NSString *)placementId;
@property(nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSURL *defaultActionURL;
@end

NS_ASSUME_NONNULL_END
