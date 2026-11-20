/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

void func_020a4e20(void *arg0, s16 *arg1, s16 *arg2) {
    s16 temp_ip;
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x2C) - M2C_FIELD(arg0, s16 *, 0x24);
    temp_ip = M2C_FIELD(arg0, s16 *, 0x2E) - M2C_FIELD(arg0, s16 *, 0x26);
    *arg1   = (temp_r0 - temp_ip) * 8;
    *arg2   = (temp_ip + temp_r0) * 4;
}
