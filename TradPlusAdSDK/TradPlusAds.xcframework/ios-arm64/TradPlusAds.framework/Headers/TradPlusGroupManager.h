//
//  TradPlusGroupManager.h
//  TradPlusAds
//
//  Created by xuejun on 2024/5/6.
//  Copyright © 2024 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdConfModel.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusGroupManager : NSObject

- (instancetype)initWithPlacementID:(NSString *)placementID;
- (void)impressionWithItem:(TradPlusAdWaterfallItem *)item;

- (void)loadConfWithPlacementId:(NSString *)placementId segmentTag:(NSString *)segmentTag scene:(NSInteger)scene  dicUserInfo:(NSDictionary *)dicUserInfo callback:(void (^)(TradPlusAdConfModel *confModel))callback;

- (void)reloadConfWithPlacementId:(NSString *)placementId segmentTag:(NSString *)segmentTag dicUserInfo:(NSDictionary *)dicUserInfo callback:(void (^)(TradPlusAdConfModel *confModel))callback;
@end

NS_ASSUME_NONNULL_END
