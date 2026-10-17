#include "m2c.h"

extern s32 data_020cf834;

s32 func_02024958(void *arg0) {
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x1C) - data_020cf834) <= 1) {
        return 1;
    }
    return 0;
}
