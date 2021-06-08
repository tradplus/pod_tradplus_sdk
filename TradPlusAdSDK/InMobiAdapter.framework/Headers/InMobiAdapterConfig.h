//
//  InMobiAdapterConfig.h
//  InMobiAdapter
//
//  Created by ms-mac on 2020/10/13.
//  Copyright © 2020 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface InMobiAdapterConfig : NSObject

+ (void)setPrivacy:(NSDictionary *)info completionHandler:(void (^ _Nullable)( NSError * _Nullable ))completionBlock;
@end

NS_ASSUME_NONNULL_END
