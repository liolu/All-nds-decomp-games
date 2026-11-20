#include "m2c.h"

s32 func_020185d0();                                /* extern */

s32 func_0201861c(void) {
    if (func_020185d0() & 0x10000000) {
        return 1;
    }
    return 0;
}
