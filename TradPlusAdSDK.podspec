Pod::Spec.new do |spec|
  spec.name         = "TradPlusAdSDK"
  spec.version      = "13.7.0"
  spec.summary      = "TradPlusAd SDK"
  spec.description  = <<-DESC
            "A short description of TradPlusAd SDK for iOS.
                   DESC
  spec.homepage     = "https://github.com/tradplus/pod_tradplus_sdk"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "tradplus" => "service@tradplus.com" }
  spec.source       = { :git => "https://github.com/tradplus/pod_tradplus_sdk.git", :tag => spec.version }
  spec.platform     = :ios, '12.0'
  spec.ios.deployment_target = '12.0'
  spec.requires_arc = true
  spec.frameworks = 'SystemConfiguration', 'CoreGraphics','Foundation','UIKit'
  
  spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.libraries = 'c++', 'z', 'sqlite3', 'xml2', 'resolv'
  valid_archs = ['x86_64','arm64']
  spec.default_subspecs = 'TradPlusAds'

  spec.subspec 'TradPlusAds' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TradPlusAds.xcframework'
     ss.resources = ['TradPlusAdSDK/TradPlusAds.bundle']
     ss.dependency 'TPExchange', '13.7.0'
  end

  spec.subspec 'NoneTPExchange' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TradPlusAds.xcframework'
     ss.resources = ['TradPlusAdSDK/TradPlusAds.bundle']
  end

  spec.subspec 'AdMobAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPAdMobAdapter.xcframework'
  end
  
  spec.subspec 'FacebookAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPFacebookAdapter.xcframework'
  end
   
  spec.subspec 'AdColonyAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPAdColonyAdapter.xcframework'
  end
   
  spec.subspec 'AppLovinAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPAppLovinAdapter.xcframework'
  end
   
  spec.subspec 'GDTMobAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPGDTMobAdapter.xcframework'
  end
   
  spec.subspec 'IronSourceAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPIronSourceAdapter.xcframework'
  end
   
  spec.subspec 'KuaiShouAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPKuaiShouAdapter.xcframework'
  end
   
  spec.subspec 'PangleAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPPangleAdapter.xcframework'
  end
   
  spec.subspec 'SigmobAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPSigmobAdapter.xcframework'
  end
   
  spec.subspec 'TapjoyAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPTapjoyAdapter.xcframework'
  end
   
  spec.subspec 'UnityAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPUnityAdapter.xcframework'
  end
   
  spec.subspec 'VungleAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPVungleAdapter.xcframework'
  end
   
  spec.subspec 'InMobiAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPInMobiAdapter.xcframework'
  end   
      
  spec.subspec 'MintegralAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPMintegralAdapter.xcframework'
  end   
   
  spec.subspec 'SmaatoAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPSmaatoAdapter.xcframework'
  end   
   
  spec.subspec 'MaioAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPMaioAdapter.xcframework'
  end   
   
  spec.subspec 'MyTargetAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPMyTargetAdapter.xcframework'
  end   
   
  spec.subspec 'KidozAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPKidozAdapter.xcframework'
  end 
   
  spec.subspec 'StartAppAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPStartAppAdapter.xcframework'
  end

  spec.subspec 'TPCrossAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPCrossAdapter.xcframework'
  end

  spec.subspec 'ChartboostAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPChartboostAdapter.xcframework'
  end

  spec.subspec 'FyberAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPFyberAdapter.xcframework'
  end

  spec.subspec 'SuperAwesomeAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPSuperAwesomeAdapter.xcframework'
  end

  spec.subspec 'BaiduAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPBaiduAdapter.xcframework'
  end

  spec.subspec 'OguryAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPOguryAdapter.xcframework'
  end
  
  spec.subspec 'VerveAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPVerveAdapter.xcframework'
  end

  spec.subspec 'YandexAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPYandexAdapter.xcframework'
  end

  spec.subspec 'HeliumAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPHeliumAdapter.xcframework'
  end

  spec.subspec 'BigoAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPBigoAdapter.xcframework'
  end

  spec.subspec 'CSJAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPCSJAdapter.xcframework'
  end

  spec.subspec 'BeiziAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPBeiziAdapter.xcframework'
  end

  spec.subspec 'TPGoogleIMAAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPGoogleIMAAdapter.xcframework'
  end

  spec.subspec 'TPAppicAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPAppicAdapter.xcframework'
  end

  spec.subspec 'TPFusionAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPFusionAdapter.xcframework'
  end

  spec.subspec 'TPZMaticooAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPZMaticooAdapter.xcframework'
  end

  spec.subspec 'AmazonAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPAmazonAdapter.xcframework'
  end

  spec.subspec 'TanxAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPTanxAdapter.xcframework'
  end

  spec.subspec 'KwaiAdsAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPKwaiAdsAdapter.xcframework'
  end

  spec.subspec 'YSONetworkAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPYSONetworkAdapter.xcframework'
  end

  spec.subspec 'TaurusXAdapter' do |ss|
     ss.ios.deployment_target = '12.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TPTaurusXAdapter.xcframework'
  end
  
end
