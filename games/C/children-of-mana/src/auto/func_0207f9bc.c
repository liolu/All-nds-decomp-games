#include "m2c.h"

u8 func_0207f9bc(void *arg0, u8 arg1) {
    u8 temp_r2;

    temp_r2                      = M2C_FIELD(arg0, u8 *, 0x41D);
    M2C_FIELD(arg0, u8 *, 0x41D) = arg1;
    return temp_r2;
}
