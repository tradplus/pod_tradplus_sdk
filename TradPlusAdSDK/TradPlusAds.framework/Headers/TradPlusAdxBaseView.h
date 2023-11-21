//
//  TradPlusAdxBaseView.h
//  TradPlusAds
//
//  Created by xuejun on 2023/2/10.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXTimer.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdxBaseView : UIView

@property (nonatomic,strong)TPADXTimer *checkTimer;
//0 默认 1确认中 2已确认展示
@property (nonatomic,assign)NSInteger checkStatus;
@property (nonatomic,assign)NSInteger minVisibleSize;
@property (nonatomic,assign)NSInteger showTimes;

@property (nonatomic,assign) BOOL checkVisible;
@property (nonatomic,assign) NSInteger minAreaRatio;
@property (nonatomic,assign) NSInteger minDuration;
@property (nonatomic,assign)BOOL openOMID;

@property (nonatomic, copy) void (^clickAct)(NSURL *url);
@property (nonatomic, copy) void (^impressionAct)(void);
@property (nonatomic, copy) void (^showErrorAct)(NSError *error);
@property (nonatomic, copy) void (^loadFinishAct)(void);
@property (nonatomic, copy) void (^loadFailAct)(NSError *error);

- (void)startCheckVisible;
- (void)stopCheckVisible;
- (void)clickWithURL:(NSURL *)url;
- (void)loadFail:(NSError *)error;
- (void)loadFinish;

//子类扩展
- (void)subDidShow;
- (void)subLoadFinish;
- (void)subLoadFail:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
