//
//  ViewController.m
//  WhiteListDemo
//
//  Created by apple on 2020/5/13.
//  Copyright © 2020 fly. All rights reserved.
//

#import "ViewController.h"
#import <mach-o/dyld.h>
#import <mach-o/loader.h>

@interface ViewController ()

@end

@implementation ViewController


+ (void)load{
     HKCheckWhitelist();
}

const char * libraries = "/var/mobile/Containers/Bundle/Application/AD8D84E6-E893-4C96-A29A-FBD13AF4B461/WhitelistDemo.app/WhitelistDemo/Library/MobileSubstrate/MobileSubstrate.dylib/Developer/usr/lib/libBacktraceRecording.dylib/Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib/System/Library/Frameworks/Foundation.framework/Foundation/usr/lib/libobjc.A.dylib/usr/lib/libSystem.B.dylib/System/Library/Frameworks/UIKit.framework/UIKit/usr/lib/libextension.dylib/usr/lib/libarchive.2.dylib/usr/lib/libicucore.A.dylib/usr/lib/libxml2.2.dylib/usr/lib/libz.1.dylib/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation/System/Library/Frameworks/CFNetwork.framework/CFNetwork/System/Library/Frameworks/SystemConfiguration.framework/SystemConfiguration/System/Library/Frameworks/Security.framework/Security/System/Library/Frameworks/IOKit.framework/Versions/A/IOKit/usr/lib/libCRFSuite.dylib/usr/lib/liblangid.dylib/usr/lib/libc++abi.dylib/usr/lib/libc++.1.dylib/usr/lib/system/libcache.dylib/usr/lib/system/libcommonCrypto.dylib/usr/lib/system/libcompiler_rt.dylib/usr/lib/system/libcopyfile.dylib/usr/lib/system/libcorecrypto.dylib/usr/lib/system/introspection/libdispatch.dylib/usr/lib/system/libdyld.dylib/usr/lib/system/liblaunch.dylib/usr/lib/system/libmacho.dylib/usr/lib/system/libremovefile.dylib/usr/lib/system/libsystem_asl.dylib/usr/lib/system/libsystem_blocks.dylib/usr/lib/system/libsystem_c.dylib/usr/lib/system/libsystem_configuration.dylib/usr/lib/system/libsystem_containermanager.dylib/usr/lib/system/libsystem_coreservices.dylib/usr/lib/system/libsystem_coretls.dylib/usr/lib/system/libsystem_dnssd.dylib/usr/lib/system/libsystem_info.dylib/usr/lib/system/libsystem_kernel.dylib/usr/lib/system/libsystem_m.dylib/usr/lib/system/libsystem_malloc.dylib/usr/lib/system/libsystem_network.dylib/usr/lib/system/libsystem_networkextension.dylib/usr/lib/system/libsystem_notify.dylib/usr/lib/system/libsystem_platform.dylib/usr/lib/system/libsystem_pthread.dylib/usr/lib/system/libsystem_sandbox.dylib/usr/lib/system/libsystem_trace.dylib/usr/lib/system/libunwind.dylib/usr/lib/system/libvminterpose.dylib/usr/lib/system/libxpc.dylib/usr/lib/libbz2.1.0.dylib/usr/lib/liblzma.5.dylib/usr/lib/libMobileGestalt.dylib/usr/lib/libsqlite3.dylib/usr/lib/libenergytrace.dylib/usr/lib/libbsm.0.dylib/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation/System/Library/PrivateFrameworks/IOSurface.framework/IOSurface/System/Library/PrivateFrameworks/PowerLog.framework/PowerLog/System/Library/PrivateFrameworks/HangTracer.framework/HangTracer/usr/lib/liblockdown.dylib/System/Library/PrivateFrameworks/MobileKeyBag.framework/MobileKeyBag/System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI/System/Library/Frameworks/CoreVideo.framework/CoreVideo/System/Library/Frameworks/OpenGLES.framework/OpenGLES/System/Library/Frameworks/VideoToolbox.framework/VideoToolbox/System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices/System/Library/Frameworks/CoreImage.framework/CoreImage/System/Library/PrivateFrameworks/DictionaryServices.framework/DictionaryServices/System/Library/PrivateFrameworks/GraphicsServices.framework/GraphicsServices/System/Library/Frameworks/CoreGraphics.framework/CoreGraphics/System/Library/Frameworks/ImageIO.framework/ImageIO/System/Library/Frameworks/QuartzCore.framework/QuartzCore/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport/System/Library/Frameworks/CoreText.framework/CoreText/System/Library/PrivateFrameworks/TextInput.framework/TextInput/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy/System/Library/PrivateFrameworks/WebCore.framework/WebCore/System/Library/PrivateFrameworks/ProofReader.framework/ProofReader/usr/lib/libAccessibility.dylib/System/Library/Frameworks/Accelerate.framework/Accelerate/System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit/System/Library/PrivateFrameworks/IOMobileFramebuffer.framework/IOMobileFramebuffer/System/Library/PrivateFrameworks/IOSurfaceAccelerator.framework/IOSurfaceAccelerator/System/Library/Frameworks/Metal.framework/Metal/System/Library/PrivateFrameworks/FontServices.framework/FontServices/System/Library/PrivateFrameworks/FontServices.framework/libFontParser.dylib/System/Library/Frameworks/Accelerate.framework/Frameworks/vImage.framework/vImage/System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/vecLib/System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libvDSP.dylib/System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libLAPACK.dylib/System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libBLAS.dylib/System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libvMisc.dylib/System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libLinearAlgebra.dylib/System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libSparseBLAS.dylib/System/Library/PrivateFrameworks/AppleJPEG.framework/AppleJPEG/System/Library/PrivateFrameworks/GPUCompiler.framework/libmetal_timestamp.dylib/System/Library/Frameworks/OpenGLES.framework/libCoreFSCache.dylib/System/Library/PrivateFrameworks/IOAccelerator.framework/IOAccelerator/System/Library/Frameworks/OpenGLES.framework/libGFXShared.dylib/System/Library/Frameworks/OpenGLES.framework/libGLImage.dylib/System/Library/Frameworks/OpenGLES.framework/libCVMSPluginSupport.dylib/System/Library/Frameworks/OpenGLES.framework/libCoreVMClient.dylib/System/Library/PrivateFrameworks/MobileSystemServices.framework/MobileSystemServices/System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices/System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders/System/Library/PrivateFrameworks/Quagga.framework/Quagga/System/Library/PrivateFrameworks/FaceCore.framework/FaceCore/System/Library/Frameworks/CoreMedia.framework/CoreMedia/System/Library/PrivateFrameworks/ColorSync.framework/ColorSync/usr/lib/libiconv.2.dylib/System/Library/PrivateFrameworks/UserFS.framework/UserFS/System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport/System/Library/Frameworks/CoreAudio.framework/CoreAudio/System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary/usr/lib/libxslt.1.dylib/usr/lib/libmarisa.dylib/System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore/System/Library/Frameworks/AudioToolbox.framework/AudioToolbox/System/Library/PrivateFrameworks/TCC.framework/TCC/System/Library/PrivateFrameworks/LanguageModeling.framework/LanguageModeling/usr/lib/libcmph.dylib/System/Library/Frameworks/MediaAccessibility.framework/MediaAccessibility/usr/lib/libstdc++.6.dylib/Library/Frameworks/CydiaSubstrate.framework/Libraries/SubstrateLoader.dylib/Library/MobileSubstrate/DynamicLibraries/RHRevealLoader.dylib/Library/Frameworks/CydiaSubstrate.framework/CydiaSubstrate";

bool HKCheckWhitelist(){
    
    int count = _dyld_image_count();//加载了多少数量
    
    for (int i = 0; i < count; i++) {
        //遍历拿到库名称！
       const char * imageName = _dyld_get_image_name(i);
        //左边有没有包含右边
        if (!strstr(libraries, imageName)&&!strstr(imageName, "/var/mobile/Containers/Bundle/Application")) {///var/mobile/Containers/Bundle/Application 排除应用本身
            printf("该库非白名单之内！！\n%s",imageName);
//            return NO;
        }
    }
    //匹配HASH？
    return YES;
}




- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}


@end
