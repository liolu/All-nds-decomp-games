#include "m2c.h"

extern s16 data_020826b4;
extern s16 data_0215d9fc;

void func_0203339c(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020826b4       = 0;
    data_0215d9fc       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
