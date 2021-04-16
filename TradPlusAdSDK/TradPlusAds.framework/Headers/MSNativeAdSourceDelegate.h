#import <Foundation/Foundation.h>

@class MSNativeAdSource;

@protocol MSNativeAdSourceDelegate <NSObject>

- (void)adSourceDidFinishRequest:(MSNativeAdSource *)source;

@end
