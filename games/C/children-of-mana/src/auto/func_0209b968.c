/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0209b968(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (M2C_FIELD(arg0, s32 *, 0x10C) * 0x14) + M2C_FIELD(arg0, s32 *, 0x24) + 0xA;
    *arg2 = M2C_FIELD(arg0, s32 *, 0x28) + (M2C_FIELD(arg0, s32 *, 0x110) * 0x10) + 8;
}
