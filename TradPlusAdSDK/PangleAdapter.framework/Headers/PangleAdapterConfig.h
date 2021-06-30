//
//  PangleAdapterConfig.h
//  PangleAdapter
//
//  Created by ms-mac on 2020/10/14.
//  Copyright © 2020 tradplus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PangleAdapterConfig : NSObject

+ (void)setPrivacy:(NSDictionary *)info;

+ (void)initPangleSDK:(NSString *)appid isCN:(BOOL)isCN;

+ (NSString *)getNotificationStr;
@end

NS_ASSUME_NONNULL_END
