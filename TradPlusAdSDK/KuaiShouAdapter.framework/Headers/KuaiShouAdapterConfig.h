//
//  KuaiShouAdapterConfig.h
//  KuaiShouAdapter
//
//  Created by ms-mac on 2020/10/14.
//  Copyright © 2020 tradplus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KuaiShouAdapterConfig : NSObject

+ (void)setPrivacy:(NSDictionary *)info;

+ (void)initKuaiShouSDK:(NSString *)appid;

+(KuaiShouAdapterConfig *)sharedInstance;

@property (nonatomic,assign)BOOL didInit;
@end

NS_ASSUME_NONNULL_END
