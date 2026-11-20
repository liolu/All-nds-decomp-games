#include "m2c.h"

extern s32 data_020cf83c;

void func_02016f74(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x268) = (s32) (data_020cf83c + arg1);
}
