#include "m2c.h"

s32 func_0204b710(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0x1AB14AB4) {
        return 0;
    }
    if (arg1 >= (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
        return 0;
    }
    return M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x70);
}
