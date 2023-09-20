//
//  TPADXCNVideoData.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/4.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusDataModel.h>
#import <TradPlusAds/TPADXCNImageData.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCNVideoData : TradPlusDataModel

@property (nonatomic,strong)NSString *url;
@property (nonatomic,strong)NSString *localURL;
@property (nonatomic,assign)NSInteger w;
@property (nonatomic,assign)NSInteger h;
@property (nonatomic,assign)NSInteger duration;
@property (nonatomic,assign)NSInteger file_size;//kb
@property (nonatomic,strong)NSString *cover;
@property (nonatomic,strong)TPADXCNImageData *coverImageData;
@property (nonatomic,assign)NSInteger cover_w;
@property (nonatomic,assign)NSInteger cover_h;
@property (nonatomic,strong)NSString *endpage_html;
@property (nonatomic,strong)NSString *endcover;
@property (nonatomic,strong)TPADXCNImageData *endcoverImageData;
@end

NS_ASSUME_NONNULL_END
