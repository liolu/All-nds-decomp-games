/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s16 data_02157c38;
extern s16 data_0216123c;

void func_0205464c(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_02157c38       = 0;
    data_0216123c       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
