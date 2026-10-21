/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02029f1c(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, u16 *, 0x28) = (u16) (M2C_FIELD(arg0, u16 *, 0x28) | 0x400);
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) (M2C_FIELD(arg0, u16 *, 0x28) & ~0x400);
}
