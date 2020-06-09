//
//  FacebookNativeAdAdapter.h
//  AdExpress
//
//  Copyright (c) 2016 MeetSocial. All rights reserved.
//

#if __has_include(<MeetSocial/MeetSocial.h>)
    #import <MeetSocial/MeetSocial.h>
#else
    #import <TradPlusAds/MSNativeAdAdapter.h>
#endif

@class FBNativeAd;

extern NSString *const gFBVideoAdsEnabledKey;

@interface FacebookNativeAdAdapter : NSObject <MSNativeAdAdapter>

@property (nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) FBNativeAd *fbNativeAd;

- (instancetype)initWithFBNativeAd:(FBNativeAd *)fbNativeAd adProperties:(NSDictionary *)adProps;
@end
