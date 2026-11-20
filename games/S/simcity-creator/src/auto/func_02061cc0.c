#include "m2c.h"

M2C_UNK func_02002e98(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02034a20(s32);                         /* extern */
s32 func_02061d98();                                /* extern */

void func_02061cc0(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_02061d98();
    func_020055c4(temp_r0, 0x200);
    func_02002e98(temp_r0, arg2, 0x200);
    func_02034a20(temp_r0);
}
