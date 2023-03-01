//
//  TPMADInfoViewController.h
//  TPMediationHelper
//
//  Created by xuejun on 2022/4/2.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    TPMADUnitInfo = 0,
    TPMADBidding,
    TPMADWaterfall,
    TPMADC2SBidding
} TPMADInfoType;

NS_ASSUME_NONNULL_BEGIN

@interface TPMADInfoViewController : UIViewController

@property (nonatomic,strong)NSDictionary *infoDic;
@end

NS_ASSUME_NONNULL_END
