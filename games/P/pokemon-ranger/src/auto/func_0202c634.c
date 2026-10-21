/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0202c634(void *arg0, s32 arg1) {
    if (arg1 & 1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) - 1);
}
