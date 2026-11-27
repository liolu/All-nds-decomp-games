/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02099b38(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x95) != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 3;
        return;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x93) != 0) || (M2C_FIELD(arg0, s32 *, 0x3C) == 7)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 2;
        return;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x97) != 0) || (M2C_FIELD(arg0, u8 *, 0x10C) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x50);
}
