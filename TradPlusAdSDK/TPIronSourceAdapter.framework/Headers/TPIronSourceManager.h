//
//  TPIronSourceManager.h
//

#import <IronSource/IronSource.h>
#import "TPIronSourceRewardedVideoDelegate.h"
#import "TPIronSourceInterstitialDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface TPIronSourceManager
: NSObject <ISDemandOnlyRewardedVideoDelegate, ISDemandOnlyInterstitialDelegate>

+ (instancetype)sharedManager;

- (void)loadRewardedAdWithDelegate:(id<IronSourceRewardedVideoDelegate>)delegate
                        instanceID:(NSString *)instanceID;
- (void)presentRewardedAdFromViewController:(nonnull UIViewController *)viewController
                                 instanceID:(NSString *)instanceID;
- (void)requestInterstitialAdWithDelegate:(id<IronSourceInterstitialDelegate>)delegate
                               instanceID:(NSString *)instanceID;
- (void)presentInterstitialAdFromViewController:(nonnull UIViewController *)viewController
                                     instanceID: (NSString *) instanceID;

@end

NS_ASSUME_NONNULL_END
