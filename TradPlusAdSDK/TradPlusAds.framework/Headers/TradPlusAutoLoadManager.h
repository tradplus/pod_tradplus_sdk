//
//  TradPlusAutoLoadManager.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/17.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class TradPlusUnitManager;

@interface TradPlusAutoLoadManager : NSObject

- (void)startLoad;
- (void)stopLoad;
- (void)loadSuccess;
- (void)loadFail;

- (void)showSuccess;
- (void)showFail;
- (void)noReady;
- (void)noCache;

- (void)noNet;


@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@end

NS_ASSUME_NONNULL_END
