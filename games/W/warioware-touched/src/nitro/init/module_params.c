#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_02114c60[]; /* SDK_AUTOLOAD_LIST */
extern char data_02114c78[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_021146e0[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_02114c60,
    (void *) data_02114c78,
    (void *) data_021146e0,
    (void *) data_021146e0,
    (void *) 0x02270800, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x02004eeb, /* SDK version 2.0.20203 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
