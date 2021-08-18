#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KlevinRouter : NSObject
@property (nonatomic, assign) BOOL isInitialized;

+ (KlevinRouter *)sharedRouter;
- (void)initializeWithAdInfo:(NSDictionary *)adInfo instance:(id)instance;
@end

NS_ASSUME_NONNULL_END
