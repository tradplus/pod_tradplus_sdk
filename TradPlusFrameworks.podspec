Pod::Spec.new do |spec|
  spec.name         = "TradPlusSDK"
  spec.version      = "4.3.4"
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
  valid_archs = ['armv7', 'armv7s', 'x86_64', 'arm64']
  spec.default_subspecs = 'TradPlusAds'

  spec.subspec 'TradPlusAds' do |ss|
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/TradPlusAds.framework'
     ss.resource = 'TradPlusSDK/TradPlusAds.bundle'
  end

  spec.subspec 'AdColonyAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/AdColonyAdapter.framework'
  end
  
  spec.subspec 'AdMobAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/AdMobAdapter.framework'
  end
  
  spec.subspec 'AppLovinAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/AppLovinAdapter.framework'
  end
  
  spec.subspec 'ByteDanceAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/ByteDanceAdapter.framework'
  end
  
  spec.subspec 'FacebookAdapter' do |ss|
     ss.dependency 'TradPlusSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusSDK/FacebookAdapter.framework'
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
   
end
