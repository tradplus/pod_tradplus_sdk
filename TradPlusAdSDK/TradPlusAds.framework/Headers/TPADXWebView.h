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

- (void)loadWithAdm:(NSString *)adm;
@property (nonatomic,readonly)WKWebView *webView;
@end

NS_ASSUME_NONNULL_END
