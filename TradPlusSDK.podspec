Pod::Spec.new do |spec|
  spec.name         = "TradPlusSDK"
  spec.version      = "5.0.2"
  spec.summary      = "A short description of TradPlus SDK for iOS."
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
     ss.vendored_frameworks = 'TradPlusSDK/TradPlusAds.framework'
     ss.resource = 'TradPlusSDK/TradPlusAds.bundle'
  end

  spec.subspec 'AdMobAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/AdMobAdapter.framework'
  end
  
  spec.subspec 'FacebookAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/FacebookAdapter.framework'
  end
   
  spec.subspec 'AdcolonyAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/AdcolonyAdapter.framework'
  end
   
  spec.subspec 'ApplovinAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/ApplovinAdapter.framework'
  end
   
  spec.subspec 'GDTMobAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/GDTMobAdapter.framework'
  end
   
  spec.subspec 'IronSourceAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/IronSourceAdapter.framework'
  end
   
  spec.subspec 'KuaiShouAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/KuaiShouAdapter.framework'
  end
   
  spec.subspec 'MoPubAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/MoPubAdapter.framework'
  end
   
  spec.subspec 'PangleAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/PangleAdapter.framework'
  end
   
  spec.subspec 'SigmobAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/SigmobAdapter.framework'
  end
   
  spec.subspec 'TapjoyAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/TapjoyAdapter.framework'
  end
   
  spec.subspec 'UnityAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/UnityAdapter.framework'
  end
   
  spec.subspec 'VungleAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/VungleAdapter.framework'
  end
   
  spec.subspec 'YouDaoAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/YouDaoAdapter.framework'
  end   
   
  spec.subspec 'InMobiAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/InMobiAdapter.framework'
  end   
   
  spec.subspec 'StartAppAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/StartAppAdapter.framework'
  end   
   
  spec.subspec 'HeliumAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/HeliumAdapter.framework'
  end   
   
  spec.subspec 'MintegralAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/MintegralAdapter.framework'
  end   
   

end
