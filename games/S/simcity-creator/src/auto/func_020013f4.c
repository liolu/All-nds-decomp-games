#include "m2c.h"

extern s16 data_020c7a80;
extern s16 data_020d0b80;

void func_020013f4(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020c7a80       = 0;
    data_020d0b80       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
