//
//  TPADLoadFailedRecord.h
//  TradPlusAds
//
//  Created by xuejun on 2022/3/3.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADLoadFailedRecord : NSObject

@property (nonatomic,assign)NSInteger loadFailedCount;
@property (nonatomic,assign)NSInteger lastLoadFailedTime;
@end

NS_ASSUME_NONNULL_END
