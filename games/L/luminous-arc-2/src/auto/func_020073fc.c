#include "m2c.h"

M2C_UNK func_01ff81e4(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02007218(M2C_UNK);                     /* extern */
M2C_UNK func_02007324(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020073a8(M2C_UNK, M2C_UNK, u32, M2C_UNK); /* extern */

void func_020073fc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3) {
    func_02007324(arg0, 0x10000000);
    func_020073a8(arg0, arg1, arg3, 0);
    if (arg3 == 0) {
        return;
    }
    func_02007218(arg0);
    func_01ff81e4(arg0, arg1, arg2, 0x92600000 | (arg3 >> 1));
}
