#include "m2c.h"

s32 func_0207eee0();                                /* extern */
M2C_UNK func_0207efb0(M2C_UNK, s32);                /* extern */

void func_0207f048(M2C_UNK arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 != 0) {
        var_r1 = func_0207eee0() | 0x10;
    } else {
        var_r1 = func_0207eee0() & ~0x10;
    }
    func_0207efb0(arg0, var_r1);
}
