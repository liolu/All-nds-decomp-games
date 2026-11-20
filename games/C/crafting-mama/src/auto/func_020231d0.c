#include "m2c.h"

s32 func_020228d8();                                /* extern */

u16 func_020231d0(void) {
    if (func_020228d8() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x02FFFCFA;
}
