TradPlusAds 

在SDK版本4.3.3以上，支持cocoapod方式引入。 

## Swift Package Manager

从 15.7.0 开始支持 Swift Package Manager 引入主包：

```swift
.package(url: "https://github.com/tradplus/pod_tradplus_sdk.git", exact: "15.7.0")
```

当前 SPM 仅包含 `TradPlusAds` 主包，并依赖 `TPExchange`。其他 Adapter 暂不支持 SPM。

集成时如遇到 Objective-C category 未加载，请在主工程的 `Other Linker Flags` 中添加 `-ObjC`。
