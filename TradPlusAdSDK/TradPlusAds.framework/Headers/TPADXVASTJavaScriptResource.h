#import <TradPlusAds/TPADXVASTModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXVASTJavaScriptResource : TPADXVASTModel
@property (nonatomic, copy, readonly) NSString *apiFramework;   // required
@property (nonatomic, copy, readonly) NSURL *resourceUrl;       // required
@end

NS_ASSUME_NONNULL_END
