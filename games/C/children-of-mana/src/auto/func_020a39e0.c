#include "m2c.h"

u8 func_020a39e0(void *arg0, u8 arg1) {
    u8 temp_r2;

    temp_r2                     = M2C_FIELD(arg0, u8 *, 0x38);
    M2C_FIELD(arg0, u8 *, 0x38) = arg1;
    return temp_r2;
}
