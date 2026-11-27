/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_02073d38(s32, s16);                        /* extern */

void func_02006158(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 temp_r0;

    M2C_FIELD(arg0, s8 *, 0xA)   = 1;
    M2C_FIELD(arg0, s16 *, 0xC)  = arg3;
    M2C_FIELD(arg0, s16 *, 0x12) = arg1;
    M2C_FIELD(arg0, s16 *, 0xE)  = func_02073d38((M2C_FIELD(arg0, s16 *, 0x12) << 8) - M2C_FIELD(arg0, s16 *, 8), arg2);
    M2C_FIELD(arg0, s16 *, 0x10) = arg2;
    temp_r0                      = M2C_FIELD(arg0, s16 *, 8);
    if ((s32) temp_r0 < 0) {
        M2C_FIELD(arg0, s16 *, 0x14) = 0xC0;
        return;
    }
    if ((s32) temp_r0 > 0) {
        M2C_FIELD(arg0, s16 *, 0x14) = 0x80;
        return;
    }
    if ((s32) M2C_FIELD(arg0, s16 *, 0xE) < 0) {
        M2C_FIELD(arg0, s16 *, 0x14) = 0xC0;
        return;
    }
    if ((s32) M2C_FIELD(arg0, s16 *, 0x10) > 0) {
        M2C_FIELD(arg0, s16 *, 0x14) = 0x80;
    }
}
