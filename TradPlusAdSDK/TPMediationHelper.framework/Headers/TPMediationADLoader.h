//
//  TPMediationADLoader.h
//  TPMediationHelper
//
//  Created by xuejun on 2022/5/30.
//

//#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    TPMADNative = 0,
    TPMADNativeBanner,
    TPMADNativeSplash,
    TPMADBanner,
    TPMADInterstitial,
    TPMADRewarded,
    TPMADSplash,
    TPMADOfferwall,
} TPMADType;

NS_ASSUME_NONNULL_BEGIN

@interface TPMediationADLoader : NSObject

- (void)setUUID:(NSString *)UUID config:(NSDictionary *)config;
- (void)load;
- (void)show;
- (UIView *)getBannerWithRect:(CGRect)rect;
- (void)clear;

@property (nonatomic,weak)UIView *nativAdView;
@property (nonatomic,readonly)BOOL isReady;
@property (nonatomic,copy)void (^_Nullable loadFinishAct)(NSError *error);
@property (nonatomic,copy)void (^_Nullable impressionAct)(NSError *error);
@property (nonatomic,copy)void (^_Nullable clickAct)(void);
@property (nonatomic,copy)void (^_Nullable closeAct)(void);
@property (nonatomic,copy)void (^_Nullable rewardAct)(void);
@property (nonatomic,copy)void (^_Nullable playAgainRewardAct)(void);
@property (nonatomic,copy)void (^_Nullable playAgainImpressionAct)(void);
@property (nonatomic,copy)void (^_Nullable playAgainClickAct)(void);
@property (nonatomic,assign)TPMADType adType;
@property (nonatomic,copy)NSString *UUID;
@end

NS_ASSUME_NONNULL_END
