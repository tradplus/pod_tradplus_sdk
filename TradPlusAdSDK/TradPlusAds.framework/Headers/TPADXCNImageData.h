//
//  TPADXCNImageData.h
//  TradPlusAds
//
//  Created by xuejun on 2023/9/4.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXCNImageData : TradPlusDataModel

@property (nonatomic,strong)NSString *url;
@property (nonatomic,strong)NSString *localURL;
@property (nonatomic,assign)NSInteger w;
@property (nonatomic,assign)NSInteger h;
@end

NS_ASSUME_NONNULL_END
