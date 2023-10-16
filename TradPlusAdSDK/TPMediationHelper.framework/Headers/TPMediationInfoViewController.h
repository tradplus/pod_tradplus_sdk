//
//  TPMediationInfoViewController.h
//  TPMediationHelper
//
//  Created by xuejun on 2022/4/1.
//

#import <UIKit/UIKit.h>
#import <TPMediationHelper/TPMediationBaseModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPMediationInfoViewController : UIViewController

@property (nonatomic,strong)TPMediationBaseModel *mediationModel;
@property (nonatomic,assign)BOOL completed;
@end

NS_ASSUME_NONNULL_END
