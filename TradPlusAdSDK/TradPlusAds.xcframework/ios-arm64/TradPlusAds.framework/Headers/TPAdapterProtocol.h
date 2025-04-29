
#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>

@protocol TPAdapterProtocol <NSObject>

@required

///初始化三方SDK（子类必须声明实现）
- (void)loadAdWithWaterfallItem:(TradPlusAdWaterfallItem *)item;
///子类必须声明实现
- (BOOL)isReady;
///返回三方资源类
- (id)getCustomObject;

@optional
///开始渲染时的事件处理
- (void)startRender;
///结束渲染后的事件处理
- (UIView *)endRender:(NSDictionary *)viewInfo clickView:(NSArray *)array;
///模版类型渲染
- (void)templateRender:(UIView *)subView;
///渲染完成后添加到subview时
- (void)didAddSubView;

@end
