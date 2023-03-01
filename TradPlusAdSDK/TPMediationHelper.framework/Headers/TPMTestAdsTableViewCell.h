//
//  TPMTestAdsTableViewCell.h
//  TPMediationHelper
//
//  Created by xuejun on 2022/6/1.
//

#import <UIKit/UIKit.h>
#import <TPMediationHelper/TPMediationADLoader.h>
#import <TPMediationHelper/TPMTestAdsViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPMTestAdsTableViewCell : UITableViewCell

@property (nonatomic,strong)TPMediationADLoader *adLoader;
@property (nonatomic,copy)NSString *adType;
@property (nonatomic,weak)TPMTestAdsViewController *testAdsViewController;
- (void)checkState;
@end

NS_ASSUME_NONNULL_END
