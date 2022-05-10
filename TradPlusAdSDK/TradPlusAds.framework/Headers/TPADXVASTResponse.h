

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVASTModel.h>
#import <TradPlusAds/TPADXVASTAd.h>
#import <TradPlusAds/TPADXVASTCompanionAd.h>
#import <TradPlusAds/TPADXVASTCreative.h>
#import <TradPlusAds/TPADXVASTDurationOffset.h>
#import <TradPlusAds/TPADXVASTIndustryIcon.h>
#import <TradPlusAds/TPADXVASTInline.h>
#import <TradPlusAds/TPADXVASTLinearAd.h>
#import <TradPlusAds/TPADXVASTMediaFile.h>
#import <TradPlusAds/TPADXVASTResource.h>
#import <TradPlusAds/TPADXVASTTrackingEvent.h>
#import <TradPlusAds/TPADXVASTWrapper.h>

NS_ASSUME_NONNULL_BEGIN

/**
 VAST ad response representing the root of the VAST document.
 */
@interface TPADXVASTResponse : TPADXVASTModel
/**
 Available ads.
 */
@property (nonatomic, nullable, readonly) NSArray<TPADXVASTAd *> *ads;

/**
 Error tracking URLs to fire upon receiving a "no ad" response.
 */
@property (nonatomic, nullable, readonly) NSArray<NSURL *> *errorURLs;

/**
 VAST document version.
 */
@property (nonatomic, nullable, copy, readonly) NSString *version;

@end

NS_ASSUME_NONNULL_END
