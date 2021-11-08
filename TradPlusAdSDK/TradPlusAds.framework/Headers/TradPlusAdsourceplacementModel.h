

#import "TradPlusDataModel.h"

@interface TradPlusAdsourceplacementModel : TradPlusDataModel

///广告源id
@property (nonatomic,copy)NSString *id;
///bid的出价 广告cpm出价；固定为0
@property (nonatomic,copy)NSString *price;
///三方biddid， 后续竞价胜出后用于加载广告的token id；
@property (nonatomic,copy)NSString *bidid;
///0 失败; 1 成功
@property (nonatomic,assign)NSInteger isbid;
///server返回码
@property (nonatomic,assign)NSInteger nbr;
///Win URL
@property (nonatomic,copy)NSString *nurl;
///Loss URL
@property (nonatomic,copy)NSString *lurl;
///DisplayNotification
@property (nonatomic,copy)NSString *impurl;
@property (nonatomic,copy)NSString *adm;
@property (nonatomic,strong)NSDictionary *payload;
@property (nonatomic,strong)NSDictionary *ext;
@property (nonatomic,strong)NSDictionary *originalDictionary;
@end

