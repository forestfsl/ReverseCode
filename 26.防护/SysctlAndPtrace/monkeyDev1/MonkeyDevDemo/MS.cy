/* Cydia Substrate - Powerful Code Insertion Platform
 * Copyright (C) 2008-2015  Jay Freeman (saurik)
*/

(function(ms) {

    let GetLibraryPath = function() {
        let handle = dlopen(NULL, RTLD_NOLOAD);
        if (handle == null)
            return null;

        try {
            let CYListenServer = dlsym(handle, "CYListenServer");
            if (CYListenServer == null)
                return null;

            let info = new Dl_info;
            if (dladdr(CYListenServer, info) == 0)
                return null;

            let path = info->dli_fname;
            let slash = path.lastIndexOf('/');
            if (slash == -1)
                return null;

            path = path.substr(0, slash);

            GetLibraryPath = function() {
                return path;
            };

            return GetLibraryPath();
        } finally {
            dlclose(handle);
        }
    };

    var libcycript = dlopen(GetLibraryPath() + "/libcycript.dylib", RTLD_NOLOAD);
    if (libcycript == null) {
        return;
    }

    var libsubstrate = dlopen(GetLibraryPath() + "/libsubstrate.dylib", RTLD_GLOBAL | RTLD_LAZY);
    if (libsubstrate == null) {
        return;
    }

    extern "C" void *MSGetImageByName(const char *);
    extern "C" void *MSFindSymbol(void *, const char *);
    extern "C" void MSHookFunction(void *, void *, void **);
    extern "C" void MSHookMessageEx(Class, SEL, void *, void **);

    var slice = Array.prototype.slice;

    ms.HookFunction = function(func, hook, old) {
        var type = typeid(func);

        var pointer;
        if (old == null || typeof old === "undefined")
            pointer = null;
        else {
            pointer = new (typedef void **);
            *old = function() { return type(*pointer).apply(null, arguments); };
        }

        MSHookFunction(func.valueOf(), type(hook), pointer);
    };

    ms.HookMessage = function(isa, sel, imp, old) {
        var type = sel.type(isa);

        var pointer;
        if (old == null || typeof old === "undefined")
            pointer = null;
        else {
            pointer = new (typedef void **);
            *old = function() { return type(*pointer).apply(null, [this, sel].concat(slice.call(arguments))); };
        }

        MSHookMessageEx(isa, sel, type(function(self, sel) { return imp.apply(self, slice.call(arguments, 2)); }), pointer);
    };

    for(var k in ms) {
        if(ms.hasOwnProperty(k)) {
            var f = ms[k];
            if(typeof f === 'function') {
                Cycript.all[k] = f;
            }
        }
    }

})(exports);
