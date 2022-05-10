//
//  TPAdapterLoaderManager.h
//  TradPlusAds
//
//  Created by xuejun on 2022/4/15.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPAdapterLoaderManager : NSObject

+ (TPAdapterLoaderManager *)sharedInstance;

- (void)startInitWithInfo:(NSArray *)infoArray;
@end

NS_ASSUME_NONNULL_END
