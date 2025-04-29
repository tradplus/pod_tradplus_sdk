//
//  TradPlusCompareItem.h
//  TradPlusAds
//
//  Created by xuejun on 2024/12/31.
//  Copyright © 2024 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    TPCompareItemTypeUnknown = 0,
    TPCompareItemTypePrice,
    TPCompareItemTypePlacementId,
    TPCompareItemTypeAdObject,
} TPCompareItemType;


@interface TradPlusCompareItem : NSObject<NSCopying>

@property (nonatomic,assign)CGFloat price;
@property (nonatomic,copy)NSString *placementId;
@property (nonatomic,strong)id adObject;
@property (nonatomic,readonly)TPCompareItemType itemType;

@end

