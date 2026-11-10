#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_02101dc0[]; /* SDK_AUTOLOAD_LIST */
extern char data_02101dd8[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_020fc520[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_02101dc0,
    (void *) data_02101dd8,
    (void *) data_020fc520,
    (void *) data_020fc520,
    (void *) 0x021182e0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x04027539, /* SDK version 4.2.30009 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
