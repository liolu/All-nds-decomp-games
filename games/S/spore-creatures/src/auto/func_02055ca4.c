#include "m2c.h"

M2C_UNK func_01ffba64(s32, s32, M2C_UNK);           /* extern */

s32 func_02055ca4(s32 arg0, s32 arg1) {
    if (arg0 == arg1) {
        return arg0;
    }
    func_01ffba64(arg0, arg1, 5);
    return arg0;
}
