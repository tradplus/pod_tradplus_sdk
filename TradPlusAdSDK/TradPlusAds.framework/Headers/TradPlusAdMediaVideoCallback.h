//
//  TradPlusAdMediaVideoCallback.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/19.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusBaseAdapter.h>
#import <TradPlusAds/TradPlusUnitManager.h>

@protocol TradPlusADMediaVideoDelegate;
NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdMediaVideoCallback : NSObject

- (void)setShowCallbackWithAdapter:(TradPlusBaseAdapter *)adapter;
- (void)mediaVideoAdPlay:(TradPlusAdWaterfallItem *)waterfallItem withError:(NSError *)error;
@property (nonatomic,weak) id<TradPlusADMediaVideoDelegate> delegate;
@property (nonatomic,strong)TradPlusUnitManager *unitManager;

@end

NS_ASSUME_NONNULL_END
