//
//  TPCrossBaseAd.h
//  TPCrossAdapter
//
//  Created by xuejun on 2024/1/4.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>
#import "TPCrossAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface TPCrossBaseAd : NSObject

@property (nonatomic, copy)NSString *adId;
@property (nonatomic, strong)NSArray *imp_track_url_list;
@property (nonatomic, strong)NSArray *click_track_url_list;
@property (nonatomic, copy)NSString *click_url;
@property (nonatomic, copy)NSString *deeplink_url;
@property (nonatomic, assign)NSInteger click_type;
@property (nonatomic, copy)NSDictionary *callbackInfo;

@property (nonatomic,assign)BOOL isReady;
- (void)setupWithWaterfallItem:(TradPlusAdWaterfallItem *)item;
- (void)loadAdWithAdType:(TPCrossAdType)adType direction:(NSInteger)direction;
- (void)loadFinsh;
- (void)loadFailWithError:(NSError *)error;
- (BOOL)clickWithViewController:(UIViewController *)viewController;

- (void)downLoadVideoWithURL:(NSString *)videoURL callback:(void (^)(NSError *error, NSString *localPath))callback;
- (void)downLoadEndCardWithURL:(NSString *)imageURL callback:(void (^)(NSError *error, NSString *localPath))callback;

- (void)adReadyEvent:(NSString *)code;
- (void)loadFinishEvent;
- (void)showStartEvent;
- (void)showEndEvent;
- (void)clickStartEvent;
- (void)clickEndEventWithErrorCode:(NSString *)errorCode;
- (void)videoStartPlayEvent;
- (void)videoProgress25Event;
- (void)videoProgress50Event;
- (void)videoProgress75Event;
- (void)closeEvent;
- (void)sendClickTrack;
- (void)sendImpressionTrack;
@end

NS_ASSUME_NONNULL_END
