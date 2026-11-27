#include "m2c.h"

void func_020f3314(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, s32 *, 0x1060) = 0;
    M2C_FIELD(arg0, s32 *, 0x1064) = 0;
    M2C_FIELD(arg0, s8 *, 0x1068)  = 0;
}
