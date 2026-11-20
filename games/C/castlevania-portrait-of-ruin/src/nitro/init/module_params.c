#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_020fdba0[]; /* SDK_AUTOLOAD_LIST */
extern char data_020fdbb8[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_020f61c0[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_020fdba0,
    (void *) data_020fdbb8,
    (void *) data_020f61c0,
    (void *) data_020f61c0,
    (void *) 0x021cdf60, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x03017534, /* SDK version 3.1.30004 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
