#include "m2c.h"

extern s16 data_020e0314;
extern s16 data_020f1890;

void func_020b17f4(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020e0314       = 0;
    data_020f1890       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
