#include "m2c.h"

M2C_UNK func_01ffbda0(M2C_UNK, s32, s32);           /* extern */
s32 func_01ffbc94();                                /* extern */

void func_01ffbd70(s32 arg0, M2C_UNK arg1, s32 arg2) {
    if (func_01ffbc94() == 0) {
        return;
    }
    func_01ffbda0(arg1, 0x04000400, arg2 * 4);
}
