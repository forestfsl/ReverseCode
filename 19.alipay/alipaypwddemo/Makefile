export THEOS_DEVICE_IP=localhost
export THEOS_DEVICE_PORT=10010

AliPayPwdDemo_CFLAGS = -std=c++11 -stdlib=libc++
AliPayPwdDemo_LDFLAGS = -stdlib=libc++
include $(THEOS)/makefiles/common.mk

TWEAK_NAME = AliPayPwdDemo
AliPayPwdDemo_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
