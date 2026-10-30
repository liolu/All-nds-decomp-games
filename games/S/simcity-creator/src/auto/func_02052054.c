#include "m2c.h"

void func_02052054(void *arg0) {
    s32 temp_r2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xA18) < 0) {
        M2C_FIELD(arg0, s32 *, 0xA18) = 0;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x37EA0);
    if (temp_r2 <= (s32) M2C_FIELD(arg0, s32 *, 0xA18)) {
        M2C_FIELD(arg0, s32 *, 0xA18) = (s32) (temp_r2 - 1);
    }
}
