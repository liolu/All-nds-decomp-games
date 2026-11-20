#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_020e0000[]; /* SDK_AUTOLOAD_LIST */
extern char data_020e0018[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_020dfd00[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_020e0000,
    (void *) data_020e0018,
    (void *) data_020dfd00,
    (void *) data_020dfd00,
    (void *) 0x020f5880, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x05057531, /* SDK version 5.5.30001 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
