#include "m2c.h"

M2C_UNK func_020293f8(s32);                         /* extern */

void func_0206324c(void *arg0, s32 arg1) {
    if (arg1 >= 2) {
        return;
    }
    if (M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x54) == 0) {
        return;
    }
    func_020293f8(arg0 + 0x54 + (arg1 * 4));
    M2C_FIELD(arg0, s16 *, 0x5C) = (s16) (M2C_FIELD(arg0, s16 *, 0x5C) - 1);
    if ((s32) M2C_FIELD(arg0, s16 *, 0x5C) < 0) {
        M2C_FIELD(arg0, s16 *, 0x5C) = 0;
    }
}
