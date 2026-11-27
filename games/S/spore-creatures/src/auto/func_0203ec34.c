#include "m2c.h"

s32 func_0203ec34(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, s32 *, 0) != M2C_FIELD(arg1, s32 *, 0)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 4) != M2C_FIELD(arg1, s16 *, 4)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 6) != M2C_FIELD(arg1, s16 *, 6)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 8) != M2C_FIELD(arg1, u8 *, 8)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 9) == M2C_FIELD(arg1, u8 *, 9)) {
        return 1;
    }
    return 0;
}
