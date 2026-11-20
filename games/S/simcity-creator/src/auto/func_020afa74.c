#include "m2c.h"

void func_020afa74(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 >= 0) && (arg1 <= 0x1F)) {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    }
    if ((arg2 >= 0) && (arg2 <= 0x1F)) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
}
