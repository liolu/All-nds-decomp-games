#include "m2c.h"

s32 func_020a2d90(u32);

s32 func_020a0f44(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020a2d90(((u8 *) arg0)[3] * 4);
    return temp_r4 + func_020a2d90(*(u16 *) arg0);
}
