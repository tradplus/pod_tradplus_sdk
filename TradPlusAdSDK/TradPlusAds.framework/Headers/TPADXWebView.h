//
//  TPADXBannerView.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/11/10.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXWebView : UIView

- (void)loadWithAdm:(NSString *)adm;
- (void)stopCheckVisible;

@property (nonatomic, copy) void (^loadFinishAct)(void);
@property (nonatomic, copy) void (^loadFailAct)(NSError *error);
@property (nonatomic, copy) void (^clickAct)(BOOL canOpen);
@property (nonatomic, copy) void (^impressionAct)(void);
@end

NS_ASSUME_NONNULL_END
