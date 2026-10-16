/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s16 data_020ad390;
extern s16 data_020afe24;

void func_020400ac(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020ad390       = 0;
    data_020afe24       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
