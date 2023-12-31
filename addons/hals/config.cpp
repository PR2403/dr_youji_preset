#include "BIS_AddonInfo.hpp"
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3A_hals"};
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        VERSION_CONFIG;
    };
};

#define HALs_DEF_INIT
	#include "Addons\main\config.hpp"
#undef HALs_DEF_INIT

#if __A3_DEBUG__
    class A3A {
        #include "CfgFunctions.hpp"
    };
#else
    #include "CfgFunctions.hpp"
#endif
