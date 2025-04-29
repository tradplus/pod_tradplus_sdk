#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TPFullscreenAdAdapter;

@protocol TPFullscreenAdAdapterDelegate <NSObject>

- (NSString * _Nullable)customerIdForAdapter:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterDidLoadAd:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapter:(TPFullscreenAdAdapter * _Nullable)adapter didFailToLoadAdWithError:(NSError * _Nullable)error;
- (void)fullscreenAdAdapter:(TPFullscreenAdAdapter *)adapter didFailToShowAdWithError:(NSError *)error;
- (void)fullscreenAdAdapterShouldReward:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterDidExpire:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterAdWillPresent:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterAdDidPresent:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterAdWillAppear:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterAdDidAppear:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterAdWillDisappear:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterAdDidDisappear:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterDidReceiveTap:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterWillLeaveApplication:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterAdWillDismiss:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterAdDidDismiss:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterDidTrackImpression:(TPFullscreenAdAdapter *)adapter;
- (void)fullscreenAdAdapterDidTrackClick:(TPFullscreenAdAdapter *)adapter;

@end

NS_ASSUME_NONNULL_END
