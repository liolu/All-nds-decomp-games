#include "m2c.h"

s32 func_02011c6c(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (s32) M2C_FIELD(arg0, u16 *, 0xC);
    *arg2 = (s32) M2C_FIELD(arg0, u16 *, 0xE);
    if (M2C_FIELD(arg0, u16 *, 0x10) == 1) {
        return 1;
    }
    return 0;
}
