//
//  TradPlusGoogleIMASDKSetting.h
//  fluteSDKSample
//
//  Created by Even on 2023/2/27.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TPGooogleIMAItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusGoogleIMASDKSetting : NSObject

+ (TradPlusGoogleIMASDKSetting *)sharedInstance;

- (void)addGooogleIMAItem:(TPGooogleIMAItem *)item;
@end

NS_ASSUME_NONNULL_END
