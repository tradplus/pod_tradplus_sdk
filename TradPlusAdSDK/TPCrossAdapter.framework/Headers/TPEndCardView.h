#import <UIKit/UIKit.h>
#import "TPImageLoader.h"

NS_ASSUME_NONNULL_BEGIN
@protocol TPEndCardViewDelegate <NSObject>
@optional

- (void)tpEndCardViewClick;
- (void)tpEndCardViewClose;
- (void)tpEndCardViewImageLoadSuccess;
- (void)tpEndCardViewImageLoadFail;

@end

@interface TPEndCardView : UIView <TPImageLoaderDelegate>
@property (nonatomic, strong) UIImageView *mainImageView;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) TPImageLoader *imageLoader;
@property (nonatomic, strong) NSDictionary *videoConfig;
@property (nonatomic, weak, nullable) id<TPEndCardViewDelegate> delegate;
@property (nonatomic, strong) NSDate *dateLoadImageStart;

- (void)loadImageAd:(NSString *)strImageURL;
@end

NS_ASSUME_NONNULL_END
