#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_020d67e0[]; /* SDK_AUTOLOAD_LIST */
extern char data_020d67f8[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_020d6180[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_020d67e0,
    (void *) data_020d67f8,
    (void *) data_020d6180,
    (void *) data_020d6180,
    (void *) 0x020eacc0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x02017532, /* SDK version 2.1.30002 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
