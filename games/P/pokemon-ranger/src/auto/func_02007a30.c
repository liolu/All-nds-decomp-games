#include "m2c.h"

void func_02007a30(void *arg0, s16 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x48C) != 1) {
        M2C_FIELD(arg0, s16 *, 0x558) = arg1;
    }
}
