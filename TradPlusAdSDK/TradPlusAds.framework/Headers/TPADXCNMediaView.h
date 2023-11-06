//
//  TPADXCNMediaView.h
//  TradPlusAds
//
//  Created by xuejun on 2023/10/25.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXResourceData.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCNMediaView : UIView

- (void)play;
@property (nonatomic,weak)TPADXResourceData *resourceData;

@property (nonatomic, copy) void (^playFailAct)(NSError *error);
@end

NS_ASSUME_NONNULL_END
