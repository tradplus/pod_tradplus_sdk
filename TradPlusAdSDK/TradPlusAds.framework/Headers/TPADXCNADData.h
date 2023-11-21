//
//  TPADXCNADData.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/4.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusDataModel.h>
#import <TradPlusAds/TPADXCNHtmlData.h>
#import <TradPlusAds/TPADXCNVideoData.h>
#import <TradPlusAds/TPADXCNImageData.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCNADData : TradPlusDataModel

//1 图片 2 视频 3 HTML 4 三小图
@property (nonatomic,assign)NSInteger adtype;
@property (nonatomic,strong)NSString *title;
@property (nonatomic,strong)NSString *desc;
@property (nonatomic,strong)NSString *cta;
@property (nonatomic,strong)NSString *from;
@property (nonatomic,assign)NSInteger add_logo;
@property (nonatomic,strong)NSArray *images;
@property (nonatomic,strong)TPADXCNImageData *icon;
@property (nonatomic,strong)TPADXCNImageData *logo;
@property (nonatomic,strong)TPADXCNVideoData *video;
@property (nonatomic,strong)TPADXCNHtmlData *html;
@property (nonatomic,strong)TPADXCNImageData *mainImage;
@property (nonatomic,strong)NSMutableArray <TPADXCNImageData *>*imageArray;
@end

NS_ASSUME_NONNULL_END
