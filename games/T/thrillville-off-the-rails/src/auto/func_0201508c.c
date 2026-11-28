/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s16 data_020dff60;
extern s16 data_020ec09c;

void func_0201508c(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020dff60       = 0;
    data_020ec09c       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
