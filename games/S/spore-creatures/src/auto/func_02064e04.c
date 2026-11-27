#include "m2c.h"

M2C_UNK func_02084dec(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02084eb4(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02084ee0(s32, s32, M2C_UNK);           /* extern */

void func_02064e04(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02084dec(arg0 + 0x18, arg1, 0);
    func_02084ee0(arg0 + 0x18, 0xFFFF, arg2);
    func_02084eb4(arg0 + 0x18, 0xFFFF, arg3);
}
