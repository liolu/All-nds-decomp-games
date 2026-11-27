/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020775e0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020776bc(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02089ff8(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;

    temp_r4 = arg0 + 0x5C + (arg1 << 6);
    func_020776bc(temp_r4, arg2, 0, 1);
    func_020775e0(temp_r4, arg2, 0, 1);
}
