/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02053804(s32 arg0, void *arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg1, s32 *, 0x50);
    if (temp_r0 == 0) {
        M2C_FIELD(arg1, s32 *, 0x50) = 0xF;
    } else if (temp_r0 < 3) {
        M2C_FIELD(arg1, s32 *, 0x48) = (s32) (M2C_FIELD(arg1, s32 *, 0x48) + 0x400);
    } else if (temp_r0 < 6) {
        M2C_FIELD(arg1, s32 *, 0x48) = (s32) (M2C_FIELD(arg1, s32 *, 0x48) - 0x400);
    } else if (temp_r0 < 9) {
        M2C_FIELD(arg1, s32 *, 0x48) = (s32) (M2C_FIELD(arg1, s32 *, 0x48) - 0x400);
    } else if (temp_r0 < 0xC) {
        M2C_FIELD(arg1, s32 *, 0x48) = (s32) (M2C_FIELD(arg1, s32 *, 0x48) + 0x400);
    }
    M2C_FIELD(arg1, s32 *, 0x50) = (s32) (M2C_FIELD(arg1, s32 *, 0x50) - 1);
    if (M2C_FIELD(arg1, s32 *, 0x50) == 0) {
        M2C_FIELD(arg1, s32 *, 0x48) = 0;
        M2C_FIELD(arg1, s8 *, 0x54)  = 0;
    }
}
