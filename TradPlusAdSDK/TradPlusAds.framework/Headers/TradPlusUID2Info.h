//
//  TradPlusUID2Info.h
//  TradPlusAds
//
//  Created by xuejun on 2023/8/14.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusUID2Info : NSObject

//email phone 至少设置一个
@property (nonatomic,copy)NSString *email;
@property (nonatomic,copy)NSString *phone;

//用户传入UID2Token
@property (nonatomic,copy)NSString *UID2Token;

@end

NS_ASSUME_NONNULL_END
