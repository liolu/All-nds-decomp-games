#include "m2c.h"

s32 func_02011c48(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (s32) M2C_FIELD(arg0, u16 *, 0x14);
    *arg2 = (s32) M2C_FIELD(arg0, u16 *, 0x16);
    if (M2C_FIELD(arg0, u16 *, 0x18) == 1) {
        return 1;
    }
    return 0;
}
