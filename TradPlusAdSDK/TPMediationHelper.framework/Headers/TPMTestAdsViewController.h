//
//  TPMTestAdsViewController.h
//  TPMediationHelper
//
//  Created by xuejun on 2022/4/1.
//

#import <UIKit/UIKit.h>
#import <TPMediationHelper/TPMediationADManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPMTestAdsViewController : UIViewController

@property (nonatomic,copy)NSString *mediationID;
@property (nonatomic,copy)NSString *mediationName;
@property (nonatomic,strong)NSDictionary *infoDic;

- (void)showADViewWithType:(TPMADType)adType;
@end

NS_ASSUME_NONNULL_END
