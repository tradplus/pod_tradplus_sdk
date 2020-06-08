Pod::Spec.new do |spec|
  spec.name         = "TradPlusFrameworks"
  spec.version      = "4.3.2"
  spec.summary      = "A short description of TradPlus SDK for iOS."
  spec.description  = <<-DESC
            TradPlus SDK 
                   DESC
  spec.homepage     = "https://github.com/tradplus/pod_tradplus_sdk"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "tradplus" => "service@tradplus.com" }
  spec.source       = { :git => "https://github.com/tradplus/pod_tradplus_sdk.git", :tag => spec.version }
  spec.platform     = :ios, '8.0'
  spec.ios.deployment_target = '8.0'
  spec.requires_arc = true
  spec.frameworks = 'SystemConfiguration', 'CoreGraphics','Foundation','UIKit'
  
  spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.libraries = 'c++', 'z', 'sqlite3', 'xml2', 'resolv'
  valid_archs = ['armv7', 'armv7s', 'x86_64', 'arm64']
  spec.default_subspecs = 'TradPlusAds'

  spec.subspec 'TradPlusAds' do |ss|
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/TradPlusAds.framework'
     ss.resource = 'TradPlusFrameworks/TradPlusAds.bundle'
  end

  spec.subspec 'AdColonyAdapter' do |ss|
     ss.dependency 'TradPlusFrameworks/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/AdColonyAdapter.framework'
  end
  
  spec.subspec 'AdMobAdapter' do |ss|
     ss.dependency 'TradPlusFrameworks/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/AdMobAdapter.framework'
  end
  
  spec.subspec 'AppLovinAdapter' do |ss|
     ss.dependency 'TradPlusFrameworks/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/AppLovinAdapter.framework'
  end
  
  spec.subspec 'ByteDanceAdapter' do |ss|
     ss.dependency 'TradPlusFrameworks/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/ByteDanceAdapter.framework'
  end
  
  spec.subspec 'FacebookAdapter' do |ss|
     ss.dependency 'TradPlusFrameworks/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/FacebookAdapter.framework'
  end
  
  spec.subspec 'GDTMobAdapter' do |ss|
     ss.dependency 'TradPlusFrameworks/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/GDTMobAdapter.framework'
  end
   
  spec.subspec 'IronSourceAdapter' do |ss|
     ss.dependency 'TradPlusFrameworks/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/IronSourceAdapter.framework'
  end
   
  spec.subspec 'TapjoyAdapter' do |ss|
     ss.dependency 'TradPlusFrameworks/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/TapjoyAdapter.framework'
  end
   
  spec.subspec 'UnityAdapter' do |ss|
     ss.dependency 'TradPlusFrameworks/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/UnityAdapter.framework'
  end
   
  spec.subspec 'VungleAdapter' do |ss|
     ss.dependency 'TradPlusFrameworks/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TradPlusFrameworks/VungleAdapter.framework'
  end
   
end
