/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s16 data_020f11bc;
extern s16 data_020f68cc;

void func_020c2030(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020f11bc       = 0;
    data_020f68cc       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
