#include "m2c.h"

M2C_UNK func_020032c4(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_020718f0(M2C_UNK);                         /* extern */

void func_020032e8(M2C_UNK arg0) {
    func_020032c4(arg0, 0, 0x1000 - func_020718f0(0));
    func_020032c4(arg0, 1, 0x1000 - func_020718f0(1));
}
