#include "m2c.h"

void func_020afa48(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 >= 0) && (arg1 <= 0x1F)) {
        M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    }
    if ((arg2 >= 0) && (arg2 <= 0x1F)) {
        M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = 1;
}
