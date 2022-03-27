
@interface TradPlusBaseAdapter ()

@property (nonatomic,copy)void (^loadFinishAct)(void);
@property (nonatomic,copy)void (^loadFailAct)(NSError *error);
@property (nonatomic,copy)void (^configErrorAct)(void);

@property (nonatomic,copy)void (^pasterPlayFinish)(TradPlusAdWaterfallItem *waterfallItem);
@property (nonatomic,copy)void (^clickAct)(TradPlusAdWaterfallItem *waterfallItem);
//1300
@property (nonatomic,copy)void (^showAct)(TradPlusAdWaterfallItem *waterfallItem);
@property (nonatomic,copy)void (^showFailAct)(TradPlusAdWaterfallItem *waterfallItem,NSError *error);
@property (nonatomic,copy)void (^closeAct)(TradPlusAdWaterfallItem *waterfallItem);
//对应1100埋点
@property (nonatomic,copy)void (^showFinishAct)(TradPlusAdWaterfallItem *waterfallItem);

@property (nonatomic,copy)void (^didCloseOtherControllerAct)(TradPlusAdWaterfallItem *waterfallItem);

@property (nonatomic,copy)void (^rewardedAct)(TradPlusAdWaterfallItem *waterfallItem , NSDictionary *info, BOOL playAgain);

@end
