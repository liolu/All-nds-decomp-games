#include "m2c.h"

M2C_UNK func_02030048(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0203a3d8(s32, s32);                    /* extern */

void func_020300a0(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02030048(arg0, arg2, arg3);
    func_0203a3d8(arg0, arg0 + arg1);
}
