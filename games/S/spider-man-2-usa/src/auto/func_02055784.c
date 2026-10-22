/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020558d8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02055968(M2C_UNK, M2C_UNK, s32);       /* extern */

void func_02055784(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r3;

    if (arg3 != 0) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    func_02055968(arg0, 0x31, arg1 | (arg2 << 0x10) | (var_r3 << 0xF));
    func_020558d8(arg0, 1);
}
