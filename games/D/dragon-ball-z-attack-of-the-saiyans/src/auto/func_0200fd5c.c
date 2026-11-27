#include "m2c.h"

s32 func_0200fd5c(void *arg0) {
    s32 temp_r1;

    temp_r1                       = M2C_FIELD(arg0, s32 *, 0x780) - 1;
    M2C_FIELD(arg0, s32 *, 0x780) = temp_r1;
    return temp_r1;
}
