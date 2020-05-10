//sum = function(a,b){
//    return a + b;
//}
//ZRROOTVC = function(){
//   return  UIApp.keyWindow.rootViewController;
//}

//ZRKEYWINDOW = function(){
//    return UIApp.keyWindow;
//}

//ZRAPPPATH = [NSBundle mainBundle].bundlePath;

//IIFE 匿名函数自执行表达式

(function(exports){


ZRAPPID = [NSBundle mainBundle].bundleIdentifier,
ZRAPPPATH = [NSBundle mainBundle].bundlePath,

//如果有变化,就用function去定义!!
ZRRootvc = function(){
    return UIApp.keyWindow.rootViewController;
};


ZRKeyWindow = function(){
    return UIApp.keyWindow;
};



ZRGetCurrentVCFromRootVc = function(rootVC){
    var currentVC;
    if([rootVC presentedViewController]){
        rootVC = [rootVC presentedViewController];
    }

    if([rootVC isKindOfClass:[UITabBarController class]]){
        currentVC = ZRGetCurrentVCFromRootVc(rootVC.selectedViewController);
    }else if([rootVC isKindOfClass:[UINavigationController class]]){
        currentVC = ZRGetCurrentVCFromRootVc(rootVC.visibleViewController);
    }else{
        currentVC = rootVC;
    }

    return currentVC;
};


ZRCurrentVC = function(){
    return ZRGetCurrentVCFromRootVc(ZRRootvc());
};

})(exports);
