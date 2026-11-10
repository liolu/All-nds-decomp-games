#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_020a3260[]; /* SDK_AUTOLOAD_LIST */
extern char data_020a3278[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_0209f7a0[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_020a3260,
    (void *) data_020a3278,
    (void *) data_0209f7a0,
    (void *) data_0209f7a0,
    (void *) 0x020df9e0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x04027538, /* SDK version 4.2.30008 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
