

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVASTModel.h>

@class TPADXVASTLinearAd;
@class TPADXVASTCompanionAd;

NS_ASSUME_NONNULL_BEGIN

@interface TPADXVASTCreative : TPADXVASTModel

/**
 A string used to identify the ad server that provides the creative.
 */
@property (nonatomic, nullable, copy, readonly) NSString *identifier;

/**
 A number representing the numerical order in which each sequenced creative within
 an ad should play.
 */
@property (nonatomic, nullable, copy, readonly) NSString *sequence;

/**
 Used to provide the ad server’s unique identifier for the creative.
 */
@property (nonatomic, nullable, copy, readonly) NSString *adID;

/**
 The media and properties describing the rendering of the creative.
 */
@property (nonatomic, nullable, strong, readonly) TPADXVASTLinearAd *linearAd;

/**
 Companion ads associated with the creative.
 */
@property (nonatomic, nullable, strong, readonly) NSArray<TPADXVASTCompanionAd *> *companionAds;

@end

NS_ASSUME_NONNULL_END
