#include "m2c.h"

s16 func_02079a24(s32 arg0, s32 arg1) {
    if ((arg1 <= 0) || (arg1 >= 0xD)) {
        return 0;
    }
    return M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0x44C);
}
