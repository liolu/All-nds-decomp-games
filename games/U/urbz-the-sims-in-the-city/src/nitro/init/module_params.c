#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_02123660[]; /* SDK_AUTOLOAD_LIST */
extern char data_02123678[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_02121ac0[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_02123660,
    (void *) data_02123678,
    (void *) data_02121ac0,
    (void *) data_02121ac0,
    (void *) 0x0214de20, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x02004e20, /* SDK version 2.0.20000 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
