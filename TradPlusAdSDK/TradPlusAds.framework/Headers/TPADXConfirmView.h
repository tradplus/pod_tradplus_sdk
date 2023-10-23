//
//  TPADXConfirmView.h
//  TradPlusAds
//
//  Created by xuejun on 2023/5/24.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXConfirmView : UIView

@property (nonatomic, copy) void (^closeViewAct)(BOOL closeAd);
@end

NS_ASSUME_NONNULL_END
