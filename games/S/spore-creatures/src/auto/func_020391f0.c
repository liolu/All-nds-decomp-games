#include "m2c.h"

void func_020391f0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x84) != 0) {
        M2C_FIELD(arg0, s32 *, 0x6C) = 5;
    }
}
