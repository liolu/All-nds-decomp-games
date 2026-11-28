#include "m2c.h"

void func_020a8ae0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x2E0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x2E4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, u8 *, 0x34A)  = (u8) (M2C_FIELD(arg0, u8 *, 0x34A) | 0x80);
}
