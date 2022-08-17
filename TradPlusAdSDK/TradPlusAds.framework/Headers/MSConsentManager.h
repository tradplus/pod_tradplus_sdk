
#import <UIKit/UIKit.h>
#import <TradPlusAds/TPConsentDialogViewController.h>
#import <TradPlusAds/MsCommon.h>

@interface MSConsentManager : NSObject

+ (MSConsentManager * _Nonnull)sharedManager;

// 是否在GDPR地区
@property (nonatomic, readonly) MSBool isGDPRApplicable;
//当前授权页面状态
@property (nonatomic, readonly) MSConsentStatus currentStatus;
//是否需要进行GDPR授权
@property (nonatomic) BOOL canCollectPersonalInfo;

//展示GDPR授权页面
- (void)showConsentDialogFromViewController:(UIViewController * _Nonnull)viewController
                                    didShow:(void (^ _Nullable)(void))didShow
                                 didDismiss:(void (^ _Nullable)(void))didDismiss;

@end
