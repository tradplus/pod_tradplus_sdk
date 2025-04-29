
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MSWebBrowserUserAgentInfo : NSObject

/**
 The current user agent as determined by @c WKWebView.
 @returns The user agent.
*/
+ (NSString *)userAgent;

@end

NS_ASSUME_NONNULL_END
