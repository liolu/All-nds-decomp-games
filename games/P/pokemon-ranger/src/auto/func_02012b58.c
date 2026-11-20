/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02012b58(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x41E) = arg1;
    if (arg1 == 0xFF) {
        M2C_FIELD(arg0, s32 *, 0x418) = (s32) (M2C_FIELD(arg0, s32 *, 0x418) & ~0x10000);
        M2C_FIELD(arg0, s32 *, 0x418) = (s32) (M2C_FIELD(arg0, s32 *, 0x418) & ~0x20000);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x418) = (s32) (M2C_FIELD(arg0, s32 *, 0x418) | 0x10000);
    M2C_FIELD(arg0, s32 *, 0x418) = (s32) (M2C_FIELD(arg0, s32 *, 0x418) | 0x20000);
}
