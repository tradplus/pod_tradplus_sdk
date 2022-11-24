//
//  TradPlusMutableArray.h
//  TradPlusAds
//
//  Created by xuejun on 2022/10/10.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusMutableArray : NSObject

- (void)addObject:(id)anObject;
- (void)removeObject:(id)anObject;

@property (nonatomic,strong)NSMutableArray *array;
@end

NS_ASSUME_NONNULL_END
