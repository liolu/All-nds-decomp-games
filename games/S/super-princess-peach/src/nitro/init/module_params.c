#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_0215db80[]; /* SDK_AUTOLOAD_LIST */
extern char data_0215db98[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_0215ac40[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_0215db80,
    (void *) data_0215db98,
    (void *) data_0215ac40,
    (void *) data_0215ac40,
    (void *) 0x021e6660, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x02017532, /* SDK version 2.1.30002 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
