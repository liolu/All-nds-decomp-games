#include "m2c.h"

extern s32 data_020cf83c;

s32 func_02016f48(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x268) > (s32) data_020cf83c) {
        return 1;
    }
    return 0;
}
