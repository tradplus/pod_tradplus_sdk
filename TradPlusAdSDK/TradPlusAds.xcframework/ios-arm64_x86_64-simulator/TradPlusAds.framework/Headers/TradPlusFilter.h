//
//  TradPlusFilter.h
//  TradPlusAds
//
//  Created by Michael on 2025/7/29.
//  Copyright © 2025 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface TradPlusFilter : NSObject

@property (nonatomic, strong) NSArray<NSNumber *> *filterNetworkIds;
@property (nonatomic, strong ,nullable) NSArray<NSNumber *> *filterBidTypes;
//广告平台ID List，如：@[@(NETWORK_FACEBOOK),@(NETWORK_ADMOB)]（可参考MSThirdNetwork）
- (TradPlusFilter *)filterNetworkIds:(NSArray<NSNumber *> *)networkIds;
//广告类型List，如：@[@(TPNetworkS2S),@(TPNetworkC2S)],若传入nil则禁止所有类型 （可参考TPForbidNetworkType）
- (TradPlusFilter *)filterBidTypes:(nullable NSArray<NSNumber *> *)bidTypes;

- (NSString *)description;

@end

NS_ASSUME_NONNULL_END
