//
//  TradPlusUID2Service.h
//  TradPlusAds
//
//  Created by xuejun on 2023/8/14.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusUID2Info.h>

@interface TradPlusUID2Service : NSObject

+ (TradPlusUID2Service *)sharedInstance;
- (void)refreshToken;

@property (nonatomic,readonly)NSString *UID2Token;
@property (nonatomic,strong)TradPlusUID2Info *UID2Info;
@end

