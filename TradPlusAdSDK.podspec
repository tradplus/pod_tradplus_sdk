Pod::Spec.new do |spec|
  spec.name         = "TradPlusAdSDK"
  spec.version      = "5.4.8"
  spec.summary      = "A short description of TradPlusAd SDK for iOS."
  spec.description  = <<-DESC
            TradPlus SDK 
                   DESC
  spec.homepage     = "https://github.com/tradplus/pod_tradplus_sdk"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "tradplus" => "service@tradplus.com" }
  spec.source       = { :git => "https://github.com/tradplus/pod_tradplus_sdk.git", :tag => spec.version }
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
     ss.vendored_frameworks = 'TradPlusAdSDK/TradPlusAds.framework'
     ss.resource = 'TradPlusAdSDK/TradPlusAds.bundle'
  end

  spec.subspec 'AdMobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/AdMobAdapter.framework'
  end
  
  spec.subspec 'FacebookAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/FacebookAdapter.framework'
  end
   
  spec.subspec 'AdColonyAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/AdColonyAdapter.framework'
  end
   
  spec.subspec 'AppLovinAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/AppLovinAdapter.framework'
  end
   
  spec.subspec 'GDTMobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/GDTMobAdapter.framework'
  end
   
  spec.subspec 'IronSourceAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/IronSourceAdapter.framework'
  end
   
  spec.subspec 'KuaiShouAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/KuaiShouAdapter.framework'
  end
   
  spec.subspec 'MoPubAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/MoPubAdapter.framework'
  end
   
  spec.subspec 'PangleAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/PangleAdapter.framework'
  end
   
  spec.subspec 'SigmobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/SigmobAdapter.framework'
  end
   
  spec.subspec 'TapjoyAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/TapjoyAdapter.framework'
  end
   
  spec.subspec 'UnityAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/UnityAdapter.framework'
  end
   
  spec.subspec 'VungleAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/VungleAdapter.framework'
  end
   
  spec.subspec 'YouDaoAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/YouDaoAdapter.framework'
  end   
   
  spec.subspec 'InMobiAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/InMobiAdapter.framework'
  end   
      
  spec.subspec 'MintegralAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/MintegralAdapter.framework'
  end   
   
  spec.subspec 'SmaatoAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusAdSDK/SmaatoAdapter.framework'
  end   
   
end