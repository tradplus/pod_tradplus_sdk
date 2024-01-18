//
//  TPADXBannerView.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/11/10.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusAdxBaseView.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXWebView : TradPlusAdxBaseView

- (void)loadWithAdm:(NSString *)adm filterRatio:(NSInteger)ratio fullScreen:(BOOL)fullScreen;
@property (nonatomic,readonly)WKWebView *webView;
@property (nonatomic, copy) void (^holdUpClickAct)(BOOL holdUp);
@end

NS_ASSUME_NONNULL_END
