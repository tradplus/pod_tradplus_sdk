//
//  TPTestModeManager.h
//  TradPlusAds
//
//  Created by xuejun on 2023/5/25.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPTestModeManager : NSObject

+ (TPTestModeManager *)sharedInstance;
- (BOOL)isTestDevice;
- (void)saveNewList:(nullable NSArray *)array;
@end

NS_ASSUME_NONNULL_END
