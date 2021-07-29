//
//  TradPlusAdapterProtocol.h
//  TradPlusAds
//
//  Created by xuejun on 2021/7/8.
//  Copyright © 2021 ms-mac. All rights reserved.
//
#import <Foundation/Foundation.h>

@protocol TradPlusAdapterProtocol <NSObject>

@required

///获取buyeruid
+ (NSString *)getBuyeruidWithInfo:(NSDictionary *)infoDic;
///获取版本号
+ (NSString *)sdkVersion;
@end
