//
//  TPMediationHelper.h
//  TPMediationHelper
//
//  Created by xuejun on 2022/3/31.
//

#import <Foundation/Foundation.h>
#import <TPMediationHelper/TPMHelperMainViewController.h>
#import <TPMediationHelper/TPMediationInfoViewController.h>
#import <TPMediationHelper/TPMADSViewController.h>
#import <TPMediationHelper/TPMTestAdsViewController.h>
#import <TPMediationHelper/TPMADInfoViewController.h>
#import <TPMediationHelper/TPMADSourceViewController.h>
#import <TPMediationHelper/TPMediationADManager.h>
#import <TPMediationHelper/TPMediationADLoader.h>
#import <TPMediationHelper/TPMNativeRenderView.h>
#import <TPMediationHelper/TPMTestAdsTableViewCell.h>

#import <TPMediationHelper/TPMediationBaseModel.h>
#import <TPMediationHelper/TPMediationAdColony.h>
#import <TPMediationHelper/TPMediationAdMob.h>
#import <TPMediationHelper/TPMediationAppLovin.h>
#import <TPMediationHelper/TPMediationBaidu.h>
#import <TPMediationHelper/TPMediationChartboost.h>
#import <TPMediationHelper/TPMediationFacebook.h>
#import <TPMediationHelper/TPMediationFyber.h>
#import <TPMediationHelper/TPMediationGDTMob.h>
#import <TPMediationHelper/TPMediationGoogleAdManager.h>
#import <TPMediationHelper/TPMediationInMobi.h>
#import <TPMediationHelper/TPMediationIronSource.h>
#import <TPMediationHelper/TPMediationKidoz.h>
#import <TPMediationHelper/TPMediationKlevin.h>
#import <TPMediationHelper/TPMediationKuaiShou.h>
#import <TPMediationHelper/TPMediationMaio.h>
#import <TPMediationHelper/TPMediationMintegral.h>
#import <TPMediationHelper/TPMediationMyTarget.h>
#import <TPMediationHelper/TPMediationOgury.h>
#import <TPMediationHelper/TPMediationPangle.h>
#import <TPMediationHelper/TPMediationSigmob.h>
#import <TPMediationHelper/TPMediationSmaato.h>
#import <TPMediationHelper/TPMediationStartApp.h>
#import <TPMediationHelper/TPMediationSuperAwesome.h>
#import <TPMediationHelper/TPMediationTapjoy.h>
#import <TPMediationHelper/TPMediationUnity.h>
#import <TPMediationHelper/TPMediationVungle.h>
#import <TPMediationHelper/TPMediationYouDao.h>
#import <TPMediationHelper/TPMediationMax.h>
#import <TPMediationHelper/TPMediationGM.h>
#import <TPMediationHelper/TPMediationVerve.h>
#import <TPMediationHelper/TPMediationHelium.h>
#import <TPMediationHelper/TPMediationYandex.h>
#import <TPMediationHelper/TPMediationCSJ.h>
#import <TPMediationHelper/TPMediationADX.h>
#import <TPMediationHelper/TPMediationBigo.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPMediationHelper : NSObject

+ (TPMediationHelper *)sharedInstance;
+ (void)open;
+ (NSString *)isOpen;
+ (NSString *)getVersion;
+ (void)showTipes:(NSString *)infoStr;
+ (void)showTipes:(NSString *)infoStr offsetY:(CGFloat)offsetY;
- (void)checkWithCallBack:(void(^)(BOOL finish,NSString *infoStr))callback;
- (void)getConfigWithNetworkid:(nullable NSString *)networkid callback:(void(^)(NSDictionary *dic,NSError *error))callback;
- (void)close;
- (BOOL)checkTestMode;
- (BOOL)checkProduceMode;
- (void)changeMode;

@property (nonatomic,strong)NSMutableDictionary *testModeConfigs;
@property (nonatomic,strong)NSMutableArray *appInfos;
@property (nonatomic,strong)NSMutableArray *tradPlusInfos;
@property (nonatomic,strong)NSMutableArray *privacyInfos;

@property (nonatomic,strong)NSMutableArray <TPMediationBaseModel *>*incompleteArray;
@property (nonatomic,strong)NSMutableArray <TPMediationBaseModel *>*completeArray;
@property (nonatomic,strong)NSMutableArray <TPMediationBaseModel *>*missingArray;

@property (nonatomic,strong)NSMutableArray *ipInfos;
@property (nonatomic,assign)BOOL didGetIPInfo;
@property (nonatomic,copy)void (^getIPInfoFinish)(void);

@property (nonatomic,strong)NSMutableArray *adsArray;
@property (nonatomic,assign)BOOL didGetAdsInfo;
@property (nonatomic,copy)void (^getAdsInfoFinish)(void);

@property (nonatomic,assign)BOOL is_test_mode;
@property (nonatomic,assign)BOOL local_test_mode;
@property (nonatomic,assign)BOOL server_test_mode;
// 0 = 初始 ；1 = 测试；2 = 生产
@property (nonatomic,assign)NSInteger modeState;


@property (nonatomic,strong)UIWindow *_Nullable window;
@property (nonatomic,strong)UINavigationController *navigationController;
@end

NS_ASSUME_NONNULL_END
