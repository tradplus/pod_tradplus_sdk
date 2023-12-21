

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVASTAdVerifications.h>
#import <TradPlusAds/TPADXVASTModel.h>

@class TPADXVASTCreative;

NS_ASSUME_NONNULL_BEGIN

@interface TPADXVASTInline : TPADXVASTModel

/**
 Optional Viewability resources.
 */
@property (nonatomic, nullable, readonly) TPADXVASTAdVerifications *adVerifications;

/**
 Optional array of creatives associated with the inline ad.
*/
@property (nonatomic, nullable, readonly) NSArray<TPADXVASTCreative *> *creatives;

/**
 Optional array of error URLs.
 */
@property (nonatomic, nullable, readonly) NSArray<NSURL *> *errorURLs;

/**
 Optional extensions in the inline ad.
*/
@property (nonatomic, nullable, readonly) NSArray<NSDictionary *> *extensions;

/**
 Required impression URLs associated with the inline ad.
*/
@property (nonatomic, nullable, readonly) NSArray<NSURL *> *impressionURLs;

@end

NS_ASSUME_NONNULL_END
