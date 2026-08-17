//
//  TPContentSignals.h
//  TradPlusAds
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPContentRatingHints.h>

NS_ASSUME_NONNULL_BEGIN

@class TPContentSignalsBuilder;

@interface TPContentSignals : NSObject

@property (nonatomic, copy, readonly) NSArray<NSString *> *genres;
@property (nonatomic, readonly) NSInteger durationSeconds;
@property (nonatomic, readonly) BOOL hasContentRating;
@property (nonatomic, readonly) TPContentRatingHint contentRating;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, copy, readonly, nullable) NSString *genreString;

+ (instancetype)signalsWithGenre:(NSString *)genre
                durationSeconds:(NSInteger)durationSeconds
                  contentRating:(TPContentRatingHint)contentRating;

+ (instancetype)signalsWithGenres:(NSArray<NSString *> *)genres
                  durationSeconds:(NSInteger)durationSeconds
                    contentRating:(TPContentRatingHint)contentRating;

+ (TPContentSignalsBuilder *)builder;

@end

@interface TPContentSignalsBuilder : NSObject

- (TPContentSignalsBuilder *)genres:(NSString *)genre, ... NS_REQUIRES_NIL_TERMINATION;
- (TPContentSignalsBuilder *)genresWithArray:(NSArray<NSString *> *)genres;
- (TPContentSignalsBuilder *)durationSeconds:(NSInteger)durationSeconds;
- (TPContentSignalsBuilder *)contentRating:(TPContentRatingHint)contentRating;
- (TPContentSignals *)build;

@end

NS_ASSUME_NONNULL_END
