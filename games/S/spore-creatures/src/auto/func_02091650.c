#include "m2c.h"

void func_02091650(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != -2) {
        if (M2C_FIELD(arg0, u16 *, 0x14) == 1) {
            M2C_FIELD(arg0, s32 *, 0) = arg1;
            M2C_FIELD(arg0, s32 *, 8) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (arg1 & 0xF);
            M2C_FIELD(arg0, s32 *, 8) = (s32) ((arg1 >> 4) << 0xC);
        }
    }
    if (arg2 != -2) {
        M2C_FIELD(arg0, s32 *, 4) = arg2;
    }
}
