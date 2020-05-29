//sum = function(a,b){
//    return a + b;
//}
//SLROOTVC = function(){
//   return  UIApp.keyWindow.rootViewController;
//}

//SLKEYWINDOW = function(){
//    return UIApp.keyWindow;
//}

//SLAPPPATH = [NSBundle mainBundle].bundlePath;

//IIFE 匿名函数自执行表达式

(function(exports){


APPID = [NSBundle mainBundle].bundleIdentifier,
APPPATH = [NSBundle mainBundle].bundlePath,

//如果有变化,就用function去定义!!
SLRootvc = function(){
return UIApp.keyWindow.rootViewController;
};


SLKeyWindow = function(){
return UIApp.keyWindow;
};



SLGetCurrentVCFromRootVc = function(rootVC){
var currentVC;
if([rootVC presentedViewController]){
rootVC = [rootVC presentedViewController];
}

if([rootVC isKindOfClass:[UITabBarController class]]){
currentVC = SLGetCurrentVCFromRootVc(rootVC.selectedViewController);
}else if([rootVC isKindOfClass:[UINavigationController class]]){
currentVC = SLGetCurrentVCFromRootVc(rootVC.visibleViewController);
}else{
currentVC = rootVC;
}

return currentVC;
};


SLCurrentVC = function(){
return SLGetCurrentVCFromRootVc(SLRootvc());
};

})(exports);
