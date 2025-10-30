
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MSWebBrowserUserAgentInfo : NSObject

//用户手动传入user agent，不再获取
+ (void)setUserAgent:(NSString *)userAgent;

//获取user agent
+ (void)obtainUserAgentFromWebView;
/**
 The current user agent as determined by @c WKWebView.
 @returns The user agent.
*/
+ (NSString *)userAgent;

@end

NS_ASSUME_NONNULL_END
