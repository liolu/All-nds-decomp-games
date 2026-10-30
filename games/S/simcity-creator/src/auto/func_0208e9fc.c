#include "m2c.h"

s32 func_0201a018(s32, s32);                        /* extern */

s32 func_0208e9fc(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 8)    = func_0201a018(arg1, arg2);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) (M2C_FIELD(arg0, s32 *, 8) + func_0201a018(M2C_FIELD(arg0, s32 *, 0x10), arg2));
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    return 1;
}
