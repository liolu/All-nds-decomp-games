#include "m2c.h"

extern void *data_020e0ba0;

void func_0203d708(u16 *arg0, u16 *arg1) {
    u16 temp_r3;

    *arg0 = 0x100;
    *arg1 = 0x200;
    if (M2C_FIELD(data_020e0ba0, u8 *, 0x574) == 0) {
        return;
    }
    temp_r3 = *arg0;
    *arg0   = *arg1;
    *arg1   = temp_r3;
}
