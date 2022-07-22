Pod::Spec.new do |spec|
  spec.name         = "TradPlusAdSDK"
  spec.version      = "7.8.0.0"
  spec.summary      = "A short description of TradPlusAd SDK for iOS."
  spec.description  = <<-DESC
            TradPlus SDK 
                   DESC
  spec.homepage     = "https://github.com/tradplus/pod_tradplus_sdk"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "tradplus" => "service@tradplus.com" }
  # spec.source       = { :git => "https://github.com/tradplus/pod_tradplus_sdk.git", :tag => spec.version }
  spec.source       = { :path => '.' }
  spec.platform     = :ios, '9.0'
  spec.ios.deployment_target = '9.0'
  spec.requires_arc = true
  spec.frameworks = 'SystemConfiguration', 'CoreGraphics','Foundation','UIKit'
  
  spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.libraries = 'c++', 'z', 'sqlite3', 'xml2', 'resolv'
  valid_archs = ['i386', 'armv7', 'armv7s', 'x86_64', 'arm64']
  spec.default_subspecs = 'TradPlusAds'

  spec.subspec 'TradPlusAds' do |ss|
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAds.framework'
     ss.resources = ['TradPlusAds.bundle','TradPlusADX.bundle']
  end

  spec.subspec 'AdMobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'AdMobAdapter.framework'
  end
  
  spec.subspec 'FacebookAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'FacebookAdapter.framework'
  end
   
  spec.subspec 'AdColonyAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'AdColonyAdapter.framework'
  end
   
  spec.subspec 'AppLovinAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'AppLovinAdapter.framework'
  end
   
  spec.subspec 'GDTMobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'GDTMobAdapter.framework'
  end
   
  spec.subspec 'IronSourceAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'IronSourceAdapter.framework'
  end
   
  spec.subspec 'KuaiShouAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'KuaiShouAdapter.framework'
  end
   
  spec.subspec 'PangleAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'PangleAdapter.framework'
  end
   
  spec.subspec 'SigmobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'SigmobAdapter.framework'
  end
   
  spec.subspec 'TapjoyAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TapjoyAdapter.framework'
  end
   
  spec.subspec 'UnityAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'UnityAdapter.framework'
  end
   
  spec.subspec 'VungleAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'VungleAdapter.framework'
  end
   
  spec.subspec 'YouDaoAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'YouDaoAdapter.framework'
  end   
   
  spec.subspec 'InMobiAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'InMobiAdapter.framework'
  end   
      
  spec.subspec 'MintegralAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'MintegralAdapter.framework'
  end   
   
  spec.subspec 'SmaatoAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'SmaatoAdapter.framework'
  end   
   
  spec.subspec 'MaioAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'MaioAdapter.framework'
  end   
   
  spec.subspec 'MyTargetAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'MyTargetAdapter.framework'
  end   

  spec.subspec 'StartAppAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'StartAppAdapter.framework'
  end

  spec.subspec 'KidozAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'KidozAdapter.framework'
  end

  spec.subspec 'KlevinAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'KlevinAdapter.framework'
  end

  spec.subspec 'ChartboostAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'ChartboostAdapter.framework'
  end

  spec.subspec 'TPCrossAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPCrossAdapter.framework'
  end

  spec.subspec 'FyberAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'FyberAdapter.framework'
  end

  spec.subspec 'SuperAwesomeAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'SuperAwesomeAdapter.framework'
  end

  spec.subspec 'BaiduAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'BaiduAdapter.framework'
  end

  spec.subspec 'OguryAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'OguryAdapter.framework'
  end

  spec.subspec 'GoogleAdManagerAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'GoogleAdManagerAdapter.framework'
  end

  spec.subspec 'MaxAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'MaxAdapter.framework'
  end

  spec.subspec 'GMAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'GMAdapter.framework'
  end

  spec.subspec 'VerveAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'VerveAdapter.framework'
  end

  spec.subspec 'YandexAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'YandexAdapter.framework'
  end
end
