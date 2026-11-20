#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_02101820[]; /* SDK_AUTOLOAD_LIST */
extern char data_02101838[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_020fd300[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_02101820,
    (void *) data_02101838,
    (void *) data_020fd300,
    (void *) data_020fd300,
    (void *) 0x021de5e0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x05047532, /* SDK version 5.4.30002 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
