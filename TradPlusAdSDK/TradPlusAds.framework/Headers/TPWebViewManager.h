//
//  TPWebViewManager.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/11/10.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPWebViewManager : NSObject

- (void)setupWithAdm:(NSString *)adm frame:(CGRect)rect;
@property (nonatomic,strong)WKWebView *webView;
@property (nonatomic,assign)BOOL openOMID;
@property (nonatomic,assign)NSInteger filterRatio;

@property (nonatomic, copy) void (^loadFinishAct)(void);
@property (nonatomic, copy) void (^loadFailAct)(NSError *error);
@property (nonatomic, copy) void (^clickAct)(NSURL *url);
@property (nonatomic, copy) void (^holdUpClickAct)(BOOL holdUp);
@end

NS_ASSUME_NONNULL_END
