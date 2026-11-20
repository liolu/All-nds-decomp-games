#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_0205a740[]; /* SDK_AUTOLOAD_LIST */
extern char data_0205a758[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_02059f40[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_0205a740,
    (void *) data_0205a758,
    (void *) data_02059f40,
    (void *) data_02059f40,
    (void *) 0x02065d40, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x02017532, /* SDK version 2.1.30002 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
