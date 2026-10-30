#include "m2c.h"

M2C_UNK func_020035d0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02034a20(s32);                         /* extern */
s32 func_02061d2c();                                /* extern */

void func_02061c88(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r0;

    temp_r0 = func_02061d2c();
    func_020055c4(temp_r0, arg3);
    func_020035d0(temp_r0, arg2, arg3);
    func_02034a20(temp_r0);
}
