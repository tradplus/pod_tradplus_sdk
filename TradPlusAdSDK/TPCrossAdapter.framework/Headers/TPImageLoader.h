#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class TPImageLoader;

@protocol TPImageLoaderDelegate <NSObject>

- (BOOL)nativeAdViewInViewHierarchy;

@optional

- (void)imageLoader:(TPImageLoader *)imageLoader didLoadImageIntoImageView:(UIImageView *)imageView;

- (void)imageLoaderDidFailToLoadImageWithError:(NSError *)error;

@end

@interface TPImageLoader : NSObject

@property (nonatomic, weak) id<TPImageLoaderDelegate> delegate;

- (void)loadImageForURL:(NSURL *)imageURL intoImageView:(UIImageView *)imageView;

@end
