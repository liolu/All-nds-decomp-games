#include "m2c.h"

void func_02047958(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x1E4) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (0 - M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1EC) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1F0) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
