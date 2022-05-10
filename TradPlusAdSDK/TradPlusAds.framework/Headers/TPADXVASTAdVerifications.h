
#import <TradPlusAds/TPADXVASTModel.h>
#import <TradPlusAds/TPADXVASTVerification.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Viewability measurement resources for the VAST creative.
 */
@interface TPADXVASTAdVerifications : TPADXVASTModel
/**
 Optional list of verification resources associated with the VAST creative.
 */
@property (nonatomic, readonly) NSArray<TPADXVASTVerification *> *verifications;   // optional
@end

NS_ASSUME_NONNULL_END
