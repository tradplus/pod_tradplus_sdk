#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// This size includes the whole hit box of the button, which might be larger than the button image.
extern const CGSize kTPAdViewCloseButtonSize;

extern const NSTimeInterval kDefaultRewardCountdownTimerIntervalInSeconds;

typedef NS_ENUM(NSUInteger, TPAdContentType) {
    /// 3rd party network ads belong to this case, with 0 for the value as the default
    TPAdContentTypeUndefined = 0,

    /// VAST video ads
    TPAdContentTypeVideo,

    /// Image ads (ads where an image is loaded into a UIImageView rather than a web view)
    TPAdContentTypeImage,
    TPAdContentTypeSplash
};

NS_ASSUME_NONNULL_END
