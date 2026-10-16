/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s16 data_020ced4c;
extern s16 data_020db6f0;

void func_0205f338(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020ced4c       = 0;
    data_020db6f0       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
