/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020539a4(s32 arg0, void *arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg1, s32 *, 0x50);
    if (temp_r0 == 0) {
        M2C_FIELD(arg1, s32 *, 0x50) = 0xF;
        M2C_FIELD(arg1, s32 *, 8)    = (s32) M2C_FIELD(arg1, s32 *, 0x34);
        M2C_FIELD(arg1, s32 *, 0)    = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    } else if (temp_r0 < 7) {
        M2C_FIELD(arg1, s32 *, 0x34) = (s32) (M2C_FIELD(arg1, s32 *, 0x34) - 0x100);
        M2C_FIELD(arg1, s32 *, 0x2C) = (s32) (M2C_FIELD(arg1, s32 *, 0x2C) - 0x80);
    } else if (temp_r0 < 0xF) {
        M2C_FIELD(arg1, s32 *, 0x34) = (s32) (M2C_FIELD(arg1, s32 *, 0x34) + 0x100);
        M2C_FIELD(arg1, s32 *, 0x2C) = (s32) (M2C_FIELD(arg1, s32 *, 0x2C) + 0x80);
    }
    M2C_FIELD(arg1, s32 *, 0x50) = (s32) (M2C_FIELD(arg1, s32 *, 0x50) - 1);
    if (M2C_FIELD(arg1, s32 *, 0x50) != 0) {
        return;
    }
    M2C_FIELD(arg1, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg1, s8 *, 0x54)  = 0;
}
