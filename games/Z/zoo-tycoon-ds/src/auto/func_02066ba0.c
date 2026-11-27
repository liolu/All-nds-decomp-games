/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s16 data_020ce004;
extern s16 data_021845f0;

void func_02066ba0(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020ce004       = 0;
    data_021845f0       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
