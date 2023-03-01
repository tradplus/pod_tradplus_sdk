//
//  TPMediationBaseModel.h
//  TPMediationHelper
//
//  Created by xuejun on 2022/4/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPMediationBaseModel : NSObject

@property (nonatomic,copy)NSString *className;
@property (nonatomic,copy)NSString *mediationName;
@property (nonatomic,copy)NSString *mediationID;
@property (nonatomic,copy)NSString *adapterVersion;
@property (nonatomic,copy)NSString *platformSDKVersion;
@property (nonatomic,copy)NSString *adaptedPlatformSDKVersion;
@property (nonatomic,copy)NSString *region;
@property (nonatomic,copy)NSString *tips;
@property (nonatomic,strong)NSArray *SKAdNetworkList;

//YES 有 NO没有
- (BOOL)checkAdapter;
- (BOOL)verify;
- (void)testModeOn;
@end

NS_ASSUME_NONNULL_END
