//
//  TPGooogleIMAItem.h
//  fluteSDKSample
//
//  Created by xuejun on 2024/4/3.
//  Copyright © 2024 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GoogleInteractiveMediaAds/GoogleInteractiveMediaAds.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPGooogleIMAItem : NSObject

@property (nonatomic, strong) IMAAdsLoader *adsLoader;
@property (nonatomic, strong) IMAAdsManager *adsManager;
@property (nonatomic, strong) UIViewController *adViewController;
@end

NS_ASSUME_NONNULL_END
