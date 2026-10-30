#include "m2c.h"

s32 func_02095064(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0xEDC);
    *arg2 = M2C_FIELD(arg0, s32 *, 0xEE4);
    if ((s32) *arg1 < 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xEDC) = (s32) M2C_FIELD(arg0, s32 *, 0xEE0);
    M2C_FIELD(arg0, s32 *, 0xEE4) = (s32) M2C_FIELD(arg0, s32 *, 0xEE8);
    M2C_FIELD(arg0, s32 *, 0xEE0) = -1;
    M2C_FIELD(arg0, s32 *, 0xEE8) = -1;
    M2C_FIELD(arg0, s32 *, 0xED8) = (s32) (M2C_FIELD(arg0, s32 *, 0xED8) - 1);
    return 1;
}
