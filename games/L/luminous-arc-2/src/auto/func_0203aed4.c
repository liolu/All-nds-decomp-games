#include "m2c.h"

extern M2C_UNK data_0217b3e0;

void func_0203aed4(void) {
    u16 temp_r1;

    temp_r1 = *(u16 *) 0x04000006;
    if ((s32) temp_r1 > 0xBF) {
        return;
    }
    *(u16 *) 0x05000000 = *((u16 *) ((s8 *) &data_0217b3e0 + (temp_r1 * 2)));
}
