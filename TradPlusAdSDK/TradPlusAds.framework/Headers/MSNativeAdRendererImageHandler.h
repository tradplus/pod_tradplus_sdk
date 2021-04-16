#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol MSNativeAdRendererImageHandlerDelegate <NSObject>

- (BOOL)nativeAdViewInViewHierarchy;

@end

@interface MSNativeAdRendererImageHandler : NSObject


@property (nonatomic, weak) id<MSNativeAdRendererImageHandlerDelegate> delegate;

- (void)loadImageForURL:(NSURL *)imageURL intoImageView:(UIImageView *)imageView;

@end
