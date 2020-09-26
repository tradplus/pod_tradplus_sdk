//  SDK 其他外部接口
//  MsSDKUtils.h
//  TradPlusDemo
//
//  Created by ms-mac on 2016/11/29.
//  Copyright © 2016年 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface MsSDKUtils : NSObject

+ (void)msSDKInit:(void (^)(NSError *error))completionBlock;
+ (NSString *)getVersion;
+ (void)logEnabled:(bool)enabled;
@end

NS_ASSUME_NONNULL_END
