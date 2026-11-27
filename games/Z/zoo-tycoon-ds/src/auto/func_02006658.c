#include "m2c.h"

void func_02006658(void *arg0) {
    s16 temp_r3;
    s32 temp_r2;

    temp_r3             = M2C_FIELD(arg0, s16 *, 0x18);
    temp_r2             = M2C_FIELD(arg0, s16 *, 0xA) & 0xFF00;
    *(s16 *) 0x0400004C = temp_r2 | (temp_r2 * 0x10) | (temp_r3 >> 8) | ((temp_r3 >> 8) * 0x10);
    if (M2C_FIELD(arg0, s16 *, 0x20) == 0) {
        M2C_FIELD(arg0, s8 *, 0x22) = 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0x12) == 0) {
        M2C_FIELD(arg0, s8 *, 0x14) = 0;
    }
    if ((M2C_FIELD(arg0, s8 *, 0x22) + M2C_FIELD(arg0, s8 *, 0x14)) == 0) {
        M2C_FIELD(arg0, s8 *, 0x24) = 0;
    }
}
