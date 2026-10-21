#include "m2c.h"

s32 func_0206c6a8();                                /* extern */

s32 func_0206c264(s32 arg0, s32 arg1) {
    if (func_0206c6a8() == 0) {
        return 0;
    }
    if (arg1 >= 5) {
        return 0;
    }
    return M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x44);
}
