
#import <Foundation/Foundation.h>
#import "TradPlusAdRes.h"
#import "TradPlusBaseAdapter.h"
#import "TradPlusAdWaterfallItem.h"
#import "TradPlusNativeRenderer.h"


@interface TradPlusAdNativeItem : NSObject

- (instancetype)initWithWaterfallItem:(TradPlusAdWaterfallItem *)item;


- (void)showAdWithSubView:(UIView *)subview renderer:(TradPlusNativeRenderer *)renderer;

- (void)clear;
@property (nonatomic,readonly)TradPlusAdRes *res;
@property (nonatomic,readonly)id customObject;
@property (nonatomic,readonly)TradPlusBaseAdapter *adapter;

@end

