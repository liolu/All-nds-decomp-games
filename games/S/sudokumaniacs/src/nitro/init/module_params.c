#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_0202ab60[]; /* SDK_AUTOLOAD_LIST */
extern char data_0202ab78[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_0202a820[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_0202ab60,
    (void *) data_0202ab78,
    (void *) data_0202a820,
    (void *) data_0202a820,
    (void *) 0x02041220, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x03017531, /* SDK version 3.1.30001 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
