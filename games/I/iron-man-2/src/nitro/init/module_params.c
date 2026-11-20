#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_021a77a0[]; /* SDK_AUTOLOAD_LIST */
extern char data_021a77b8[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_021a36a0[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_021a77a0,
    (void *) data_021a77b8,
    (void *) data_021a36a0,
    (void *) data_021a36a0,
    (void *) 0x021b8240, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x05017537, /* SDK version 5.1.30007 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
