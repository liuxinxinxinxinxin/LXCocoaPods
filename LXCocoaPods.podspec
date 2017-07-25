
Pod::Spec.new do |s|

  s.name         = "LXCocoaPods"
  s.version      = "0.0.3"
  s.summary      = "A short description of LXCocoaPods."
  s.homepage     = "https://github.com/liuxinxinxinxinxin/LXCocoaPods"
  s.license      = "MIT"
  s.author       = { "刘欣" => "425979706@qq.com" }
  s.source       = { :git => "https://github.com/liuxinxinxinxinxin/LXCocoaPods.git", :tag => "#{s.version}" }
  s.source_files = "LXCocoaPods/*.{h,m}"
  s.requires_arc = true
  s.ios.deployment_target = "9.0"

end

