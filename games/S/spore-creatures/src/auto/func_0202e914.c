#include "m2c.h"

u8 func_0202e914(void *arg0) {
    u8 temp_r0;

    temp_r0                       = M2C_FIELD(arg0, u8 *, 0x2910);
    M2C_FIELD(arg0, u8 *, 0x2910) = 0U;
    return temp_r0;
}
