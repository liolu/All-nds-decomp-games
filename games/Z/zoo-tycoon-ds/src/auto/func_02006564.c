/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02006564(void *arg0) {
    s32 temp_lr;

    temp_lr             = (s16) M2C_FIELD(arg0, s16 *, 8) >> 8;
    *(s16 *) 0x04001050 = M2C_FIELD(arg0, u16 *, 0xC) | 0x40;
    *(s16 *) 0x04001052 = temp_lr | ((0x10 - temp_lr) << 8);
    if (((s16) M2C_FIELD(arg0, s16 *, 8) >> 8) == M2C_FIELD(arg0, s16 *, 0x12)) {
        M2C_FIELD(arg0, s8 *, 0xA) = 0;
    }
}
