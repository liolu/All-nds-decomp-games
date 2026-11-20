#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_02060fc0[]; /* SDK_AUTOLOAD_LIST */
extern char data_02060fd8[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_02058e20[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_02060fc0,
    (void *) data_02060fd8,
    (void *) data_02058e20,
    (void *) data_02058e20,
    (void *) 0x020773c0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x04007530, /* SDK version 4.0.30000 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
