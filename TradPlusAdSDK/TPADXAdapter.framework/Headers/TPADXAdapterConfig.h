//
//  TPADXAdapterConfig.h
//  fluteSDKSample
//
//  Created by ms-mac on 2021/5/12.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXAdapterConfig : NSObject

+ (void)setPrivacy:(NSDictionary *)info;

+ (void)initADX:(NSDictionary *)info;
@end

NS_ASSUME_NONNULL_END
