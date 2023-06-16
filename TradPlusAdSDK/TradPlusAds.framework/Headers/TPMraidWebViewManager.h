//
//  TPMraidWebViewManager.h
//  TestMraid
//
//  Created by xuejun on 2021/11/10.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPMraidWebViewManager : NSObject

- (void)setupWithAdm:(NSString *)adm frame:(CGRect)rect;
- (void)impressionAct;

@property (nonatomic,strong)WKWebView *webView;

@property (nonatomic, copy) void (^loadFinishAct)(void);
@property (nonatomic, copy) void (^loadFailAct)(NSError *error);
@property (nonatomic, copy) void (^clickAct)(NSURL *url);
@end

NS_ASSUME_NONNULL_END
