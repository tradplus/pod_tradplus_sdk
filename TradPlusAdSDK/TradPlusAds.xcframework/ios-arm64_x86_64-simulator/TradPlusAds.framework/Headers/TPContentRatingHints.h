//
//  TPContentRatingHints.h
//  TradPlusAds
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// TTD Content Signals 内容适宜年龄下限（方案 A，粗粒度 6 档）
typedef NS_ENUM(NSInteger, TPContentRatingHint) {
    TPContentRatingHintAll = 0,
    TPContentRatingHintChild = 7,
    TPContentRatingHintYouth = 12,
    TPContentRatingHintTeen = 15,
    TPContentRatingHintAdult = 18,
    TPContentRatingHintUnrated = -1,
};

NS_ASSUME_NONNULL_END
