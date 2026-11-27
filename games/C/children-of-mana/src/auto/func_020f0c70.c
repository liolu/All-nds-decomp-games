#include "m2c.h"

s32 func_020f0c70(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x50D) = (s8) M2C_FIELD(arg0, s32 *, 0x4F8);
    M2C_FIELD(arg0, s8 *, 0x50E) = 0;
    return 1;
}
