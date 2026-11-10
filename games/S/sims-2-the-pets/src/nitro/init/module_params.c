#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_02119900[]; /* SDK_AUTOLOAD_LIST */
extern char data_02119918[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_02116ca0[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_02119900,
    (void *) data_02119918,
    (void *) data_02116ca0,
    (void *) data_02116ca0,
    (void *) 0x0214dba0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x03017531, /* SDK version 3.1.30001 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
