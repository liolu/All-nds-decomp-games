#include "m2c.h"

u32 func_02006568();                                /* extern */

s32 func_020065dc(s32 arg0, s32 arg1) {
    if (func_02006568() < (u32) M2C_FIELD(((arg1 * 0xC) + arg0), u8 *, 9)) {
        return 1;
    }
    return 0;
}
