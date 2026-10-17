/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02007aec(void *arg0, void *arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_r2 == 3) {
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_r2;
        M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 8);
    }
}
