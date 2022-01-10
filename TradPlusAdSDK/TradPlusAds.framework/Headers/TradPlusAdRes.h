

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

//默认 TPAdResTypeAssets
@property (nonatomic,assign)TPAdResType adType;

//模版类型的adView
//TPAdResType = TPAdResTypeView
@property (nonatomic,strong)UIView *adView;

//多个adView时使用
//TPAdResType = TPAdResTypeViewList
@property (nonatomic,strong)NSArray *adViewList;

//自渲染类型的素材
//广告标题
@property (nonatomic,copy)NSString *title;
//广告描述
@property (nonatomic,copy)NSString *body;
//广告按钮
@property (nonatomic,copy)NSString *ctaText;
//广告图标
@property (nonatomic,readonly)TPAdResMediaType iconType;
@property (nonatomic,strong)UIImage *iconImage;
@property (nonatomic,copy)NSString *iconImageURL;
@property (nonatomic,strong)UIView *iconView;
//广告media
@property (nonatomic,readonly)TPAdResMediaType mediaType;
@property (nonatomic,strong)UIImage *mediaImage;
@property (nonatomic,copy)NSString *mediaImageURL;
@property (nonatomic,strong)UIView *mediaView;
@property (nonatomic,strong)NSArray *mediaImageList;
//广告adChoice图标
@property (nonatomic,readonly)TPAdResMediaType adChoiceType;
@property (nonatomic,strong)UIImage *adChoiceImage;
@property (nonatomic,copy)NSString *adChoiceImageURL;
@property (nonatomic,strong)UIView *adChoiceView;

//其他非常用参数
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
@property (nonatomic,copy)NSString *likes;

@end
