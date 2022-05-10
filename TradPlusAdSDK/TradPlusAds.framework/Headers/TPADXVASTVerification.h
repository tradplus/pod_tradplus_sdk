#import <TradPlusAds/TPADXVASTModel.h>
#import <TradPlusAds/TPADXVASTJavaScriptResource.h>
#import <TradPlusAds/TPADXVASTTrackingEvent.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Viewability verification resource.
 */
@interface TPADXVASTVerification : TPADXVASTModel
/**
 Viewability vendor
 */
@property (nonatomic, copy, readonly) NSString *vendor;

/**
 Javascript resource URL.
 */
@property (nonatomic, readonly) TPADXVASTJavaScriptResource *javascriptResource;

/**
 Optional verification parameters string.
 */
@property (nonatomic, nullable, copy, readonly) NSString *verificationParameters;

/**
 Optional tracking events related to verification.
 */
@property (nonatomic, nullable, readonly) NSDictionary<NSString *, NSArray<TPADXVASTTrackingEvent *> *> *trackingEvents;

@end

NS_ASSUME_NONNULL_END
