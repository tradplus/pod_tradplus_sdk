//
//  TPScreenInfo.h
//  TradPlusAds
//
//  Created by xuejun on 2023/4/23.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPScreenInfo : NSObject

+ (TPScreenInfo *)sharedInstance;
- (void)setup;
@property (nonatomic,assign)NSInteger ppi;
@end

NS_ASSUME_NONNULL_END
