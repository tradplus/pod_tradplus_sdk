//
//  UIView+TPADX.h
//  TradPlusAds
//
//  Created by xuejun on 2022/7/4.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (TPADX)

- (BOOL)tp_isVisible;
- (BOOL)tp_checkVisibleSize:(NSInteger)minSize;
@end

NS_ASSUME_NONNULL_END
