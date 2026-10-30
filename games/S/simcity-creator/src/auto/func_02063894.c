#include "m2c.h"

M2C_UNK func_020638d4(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02063990(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_020705d4(s32);                             /* extern */

void func_02063894(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_020705d4(M2C_FIELD(arg0, s32 *, 8)) == 8) {
        func_02063990(arg0, arg1, arg2);
        return;
    }
    func_020638d4(arg0, arg1, arg2);
}
