//
//  TradPlusAdxInStreamView.h
//  TradPlusAds
//
//  Created by xuejun on 2023/8/16.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdxInStreamView : UIView

- (void)setup;
- (void)addTaps;

@property (nonatomic,weak)IBOutlet UILabel *ctaLable;
@property (nonatomic,weak)IBOutlet UILabel *timeLabel;
@property (nonatomic,weak)IBOutlet UILabel *skipLabel;

@property (nonatomic,copy) void (^ctaCallback)(void);
@property (nonatomic,copy) void (^skipCallback)(void);
@end

NS_ASSUME_NONNULL_END
