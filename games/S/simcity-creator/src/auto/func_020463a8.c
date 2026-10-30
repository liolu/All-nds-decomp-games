#include "m2c.h"

s8 func_020463a8(s32 arg0, s32 arg1) {
    if (arg1 >= 0xA) {
        return 0;
    }
    return M2C_FIELD((arg0 + arg1), s8 *, 0x806B);
}
