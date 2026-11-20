#include "m2c.h"

void func_020386cc(void *arg0, s32 arg1) {
    if (arg1 != M2C_FIELD(arg0, s32 *, 4)) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
}
