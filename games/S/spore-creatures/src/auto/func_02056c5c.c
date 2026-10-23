#include "m2c.h"

void func_02056c5c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x184) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x188) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
