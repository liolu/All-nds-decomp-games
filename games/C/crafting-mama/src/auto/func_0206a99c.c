#include "m2c.h"

s32 func_0206ad44();                                /* extern */

s32 func_0206a99c(s32 arg0, s32 arg1) {
    if (func_0206ad44() == 0) {
        return 0;
    }
    if (arg1 >= 5) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x4C), s32 *, 0x20);
}
