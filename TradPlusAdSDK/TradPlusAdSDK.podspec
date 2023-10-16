Pod::Spec.new do |spec|
  spec.name         = "TradPlusAdSDK"
  spec.version      = "9.1.0.0"
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
     ss.vendored_frameworks = 'TPAdMobAdapter.framework'
  end
  
  spec.subspec 'FacebookAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPFacebookAdapter.framework'
  end
   
  spec.subspec 'AdColonyAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPAdColonyAdapter.framework'
  end
   
  spec.subspec 'AppLovinAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPAppLovinAdapter.framework'
  end
   
  spec.subspec 'GDTMobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPGDTMobAdapter.framework'
  end
   
  spec.subspec 'IronSourceAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPIronSourceAdapter.framework'
  end
   
  spec.subspec 'KuaiShouAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPKuaiShouAdapter.framework'
  end
   
  spec.subspec 'PangleAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPPangleAdapter.framework'
  end
   
  spec.subspec 'SigmobAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPSigmobAdapter.framework'
  end
   
  spec.subspec 'TapjoyAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPTapjoyAdapter.framework'
  end
   
  spec.subspec 'UnityAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPUnityAdapter.framework'
  end
   
  spec.subspec 'VungleAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPVungleAdapter.framework'
  end
   
  spec.subspec 'YouDaoAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPYouDaoAdapter.framework'
  end   
   
  spec.subspec 'InMobiAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPInMobiAdapter.framework'
  end   
      
  spec.subspec 'MintegralAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPMintegralAdapter.framework'
  end   
   
  spec.subspec 'SmaatoAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPSmaatoAdapter.framework'
  end   
   
  spec.subspec 'MaioAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPMaioAdapter.framework'
  end   
   
  spec.subspec 'MyTargetAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPMyTargetAdapter.framework'
  end   

  spec.subspec 'StartAppAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPStartAppAdapter.framework'
  end

  spec.subspec 'KidozAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPKidozAdapter.framework'
  end

  spec.subspec 'KlevinAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPKlevinAdapter.framework'
  end

  spec.subspec 'ChartboostAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPChartboostAdapter.framework'
  end

  spec.subspec 'TPCrossAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPCrossAdapter.framework'
  end

  spec.subspec 'FyberAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPFyberAdapter.framework'
  end

  spec.subspec 'SuperAwesomeAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPSuperAwesomeAdapter.framework'
  end

  spec.subspec 'BaiduAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPBaiduAdapter.framework'
  end

  spec.subspec 'OguryAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPOguryAdapter.framework'
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
     ss.vendored_frameworks = 'TPVerveAdapter.framework'
  end

  spec.subspec 'YandexAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPYandexAdapter.framework'
  end

  spec.subspec 'HeliumAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPHeliumAdapter.framework'
  end

  spec.subspec 'BigoAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPBigoAdapter.framework'
  end

  spec.subspec 'BeiziAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPBeiziAdapter.framework'
  end

  spec.subspec 'CSJAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPCSJAdapter.framework'
  end

  spec.subspec 'TPGoogleIMAAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPGoogleIMAAdapter.framework'
  end

  spec.subspec 'TPMediationHelper' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPMediationHelper.framework'
     ss.resources = ['TPMediationHelper.bundle']
  end
  spec.subspec 'TPAppicAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPAppicAdapter.framework'
  end

  spec.subspec 'TPFusionAdapter' do |ss|
     ss.dependency 'TradPlusAdSDK/TradPlusAds'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'TPFusionAdapter.framework'
  end
end
