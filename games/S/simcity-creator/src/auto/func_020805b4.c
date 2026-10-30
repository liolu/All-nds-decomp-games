#include "m2c.h"

s32 func_02070b84(s32);                             /* extern */
M2C_UNK func_02080c04(s32 *, M2C_UNK, M2C_UNK);     /* extern */

void func_020805b4(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_02070b84(*arg0) != 0xC) {
        return;
    }
    func_02080c04(arg0, arg1, arg2);
}
