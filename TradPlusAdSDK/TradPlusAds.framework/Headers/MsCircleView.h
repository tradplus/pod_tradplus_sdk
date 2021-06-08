//
//  MsCircleView.h
//  tSimple
//
//  Created by ms-mac on 2017/5/10.
//  Copyright © 2017年 TradPlusAd All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MsCircleView : UIView

@property(assign,nonatomic) CGFloat startValue;
@property(assign,nonatomic) CGFloat lineWidth;
@property(assign,nonatomic) CGFloat value;
@property(strong,nonatomic) UIColor *lineColr;
@property(nonatomic) int total;

@end
