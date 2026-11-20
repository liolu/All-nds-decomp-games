#include "m2c.h"

void func_02096378(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    M2C_FIELD(arg0, s16 *, 0x1E) = arg1;
    M2C_FIELD(arg0, s16 *, 0x20) = arg2;
    M2C_FIELD(arg0, s16 *, 0x22) = arg3;
    M2C_FIELD(arg0, s16 *, 0x24) = arg4;
}
