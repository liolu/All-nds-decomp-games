#include "m2c.h"

extern s16 data_02110c9c;
extern s16 data_021e15dc;

void func_020cd978(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_02110c9c       = 0;
    data_021e15dc       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
