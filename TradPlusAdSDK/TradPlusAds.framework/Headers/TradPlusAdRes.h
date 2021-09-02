

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    TPAdResTypeAssets,
    TPAdResTypeView,
    TPAdResTypeViewList,
} TPAdResType;

typedef enum : NSUInteger {
    TPAdResMediaTypeNone = 0,
    TPAdResMediaTypeImage,
    TPAdResMediaTypeView,
    TPAdResMediaTypeURLString,
    TPAdResMediaTypeImageList,
} TPAdResMediaType;

@interface TradPlusAdRes : NSObject

@property (nonatomic,assign)TPAdResType adType;

///TPAdResType = TPAdResTypeView
@property (nonatomic,strong)UIView *adView;
///TPAdResType = TPAdResTypeViewList
@property (nonatomic,strong)NSArray *adViewList;

@property (nonatomic,copy)NSString *title;
@property (nonatomic,copy)NSString *body;
@property (nonatomic,copy)NSString *ctaText;

@property (nonatomic,readonly)TPAdResMediaType iconType;
@property (nonatomic,strong)UIImage *iconImage;
@property (nonatomic,copy)NSString *iconImageURL;
@property (nonatomic,strong)UIView *iconView;

@property (nonatomic,readonly)TPAdResMediaType mediaType;
@property (nonatomic,strong)UIImage *mediaImage;
@property (nonatomic,copy)NSString *mediaImageURL;
@property (nonatomic,strong)UIView *mediaView;
@property (nonatomic,strong)NSArray *mediaImageList;

@property (nonatomic,readonly)TPAdResMediaType adChoiceType;
@property (nonatomic,strong)UIImage *adChoiceImage;
@property (nonatomic,copy)NSString *adChoiceImageURL;
@property (nonatomic,strong)UIView *adChoiceView;

//smaato AdMob InMobi Pangle GDTMob MyTarget kuaishou
@property (nonatomic,copy)NSNumber *rating;

//ADMob
@property (nonatomic,copy)NSString *store;
//ADMob GDTMob
@property (nonatomic,copy)NSString *price;

//Facebook ADMob
@property (nonatomic,copy)NSString *advertiser;
//MyTarget
@property (nonatomic,copy)NSString *advertisingLabel;
@property (nonatomic,copy)NSString *ageRestrictions;
@property (nonatomic,copy)NSString *disclaimer;
@property (nonatomic,copy)NSString *category;
@property (nonatomic,copy)NSString *subcategory;
@property (nonatomic,copy)NSString *domain;
@property (nonatomic,assign)NSInteger votes;


//smaato Facebook MoPub
@property (nonatomic,copy)NSString *sponsored;

//Facebook
@property (nonatomic,copy)NSString *linkDescription;
@property (nonatomic,copy)NSString *socialContext;
@property (nonatomic,copy)NSString *rawBodyText;
@property (nonatomic,copy)NSString *adTranslation;
@property (nonatomic,copy)NSString *promotedTranslation;

//Pangle
@property (nonatomic,assign)NSInteger commentNum;
//Pangle kuaishou
@property (nonatomic,copy)NSString *source;

@end
