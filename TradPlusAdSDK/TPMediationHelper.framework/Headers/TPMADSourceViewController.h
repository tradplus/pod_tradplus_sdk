//
//  TPMADSourceViewController.h
//  TPMediationHelper
//
//  Created by xuejun on 2022/4/2.
//

#import <UIKit/UIKit.h>
#import <TPMediationHelper/TPMADInfoViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPMADSourceViewController : UIViewController

@property (nonatomic,strong)NSDictionary *adconf;
@property (nonatomic,copy)NSString *UUID;
@property (nonatomic,assign)TPMADInfoType type;
@end

NS_ASSUME_NONNULL_END
