/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02013d88(void *arg0, void *arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_r2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = temp_r2;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 8);
    }
}
