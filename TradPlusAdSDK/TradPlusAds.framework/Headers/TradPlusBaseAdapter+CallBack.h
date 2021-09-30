
@interface TradPlusBaseAdapter ()

@property (nonatomic,copy)void (^loadFinishAct)(void);
@property (nonatomic,copy)void (^loadFailAct)(NSError *error);
@property (nonatomic,copy)void (^configErrorAct)(void);

@property (nonatomic,copy)void (^clickAct)(void);
//1300
@property (nonatomic,copy)void (^showAct)(void);
@property (nonatomic,copy)void (^showFailAct)(NSError *error);
@property (nonatomic,copy)void (^closeAct)(void);
//对应1100埋点
@property (nonatomic,copy)void (^showFinishAct)(void);

@property (nonatomic,copy)void (^didCloseOtherControllerAct)(void);

@property (nonatomic,copy)void (^rewardedAct)(NSDictionary *info);
@end
