//
//  TradPlusNativeRenderer.h
//  TradPlusAds
//
//  Created by xuejun on 2021/7/23.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdRes.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusNativeRenderer : NSObject

@property (nonatomic,strong)Class renderingViewClass;
@property (nonatomic,assign)CGSize renderSize;
- (UIView *)showADWithRes:(TradPlusAdRes *)res;
- (NSDictionary *)getViewInfo;
- (NSArray *)getClickViewArray;

///自定义设置
- (void)setTitleLable:(UILabel *)label canClick:(BOOL)canClick;
- (void)setTextLable:(UILabel *)label canClick:(BOOL)canClick;
- (void)setCtaLable:(UILabel *)label canClick:(BOOL)canClick;
- (void)setIconView:(UIImageView *)imageView canClick:(BOOL)canClick;
- (void)setMainImageView:(UIImageView *)imageView canClick:(BOOL)canClick;
- (void)setAdChoiceImageView:(UIImageView *)imageView canClick:(BOOL)canClick;
- (void)setMediaView:(UIView *)view canClick:(BOOL)canClick;
- (void)setAdView:(UIView *)view canClick:(BOOL)canClick;
///用于注册额外元素
- (void)setCustomerView:(UIView *)view key:(NSString *)key canClick:(BOOL)canClick;
///重写此接口来添加额外元素
- (void)customerRendererWithRes:(TradPlusAdRes *)res;
@end

NS_ASSUME_NONNULL_END
