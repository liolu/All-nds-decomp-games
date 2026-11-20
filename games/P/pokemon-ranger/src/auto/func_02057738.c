#include "m2c.h"

M2C_UNK func_020587e8(M2C_UNK);                     /* extern */
s32 func_020587ec();                                /* extern */

s32 func_02057738(M2C_UNK arg0, s32 arg1, void *arg2, void *arg3) {
    if (func_020587ec() != 0) {
        func_020587e8(arg0);
    }
    M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg3, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    return 0;
}
