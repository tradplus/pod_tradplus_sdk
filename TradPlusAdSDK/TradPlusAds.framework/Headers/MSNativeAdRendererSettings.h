#import <Foundation/Foundation.h>
#import "MSNativeAdRenderer.h"

@protocol MSNativeAdRendererSettings <NSObject>

@optional

@property (nonatomic, readwrite, copy) MSNativeViewSizeHandler viewSizeHandler;

@end
