#import <Foundation/Foundation.h>

#if __has_include(<Chartboost/Chartboost+Mediation.h>)
    #import <Chartboost/Chartboost+Mediation.h>
#else
    #import "Chartboost+Mediation.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface ChartboostRouter : NSObject
+ (CHBMediation *)mediation;
+ (void)setDataUseConsentWithTradPlusConfiguration;
+ (void)startWithParameters:(NSDictionary *)parameters completion:(void(^)(BOOL))completion;
@end

NS_ASSUME_NONNULL_END
