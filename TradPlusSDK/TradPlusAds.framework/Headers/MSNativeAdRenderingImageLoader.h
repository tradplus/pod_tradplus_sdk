#import <UIKit/UIKit.h>

@class MSNativeAdRendererImageHandler;

@interface MSNativeAdRenderingImageLoader : NSObject

- (instancetype)initWithImageHandler:(MSNativeAdRendererImageHandler *)imageHandler;

- (void)loadImageForURL:(NSURL *)url intoImageView:(UIImageView *)imageView;

@end
