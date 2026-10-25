#include "m2c.h"

s32 func_01ffcf44(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) && (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4))) {
        return 1;
    }
    return 0;
}
