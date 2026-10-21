#include "m2c.h"

extern s16 data_020ee400;
extern s16 data_02147820;

void func_020016d8(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020ee400       = 0;
    data_02147820       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
