#include "m2c.h"

void func_02044ddc(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x45C) == arg1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x45C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x460) = 0;
    M2C_FIELD(arg0, s32 *, 0x464) = 0;
    M2C_FIELD(arg0, s32 *, 0x470) = 1;
}
