#include "m2c.h"

M2C_UNK func_02067bf0(s32, s16, s16);               /* extern */
M2C_UNK func_02067e98(s32, s32);                    /* extern */
M2C_UNK func_02067ea8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02068a54();                            /* extern */
M2C_UNK func_02068d74();                            /* extern */

void func_020690c8(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s16 arg4, s16 arg5) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = arg1 * 0x1AC;
    temp_r5 = arg0 + 0xD0;
    func_02067e98(temp_r5 + temp_r4, arg2);
    func_02067ea8(temp_r5 + temp_r4, arg3);
    func_02067bf0(temp_r5 + temp_r4, arg4, arg5);
    if (arg2 == 0) {
        func_02068a54(arg0, arg1);
        return;
    }
    func_02068d74(arg0, arg1);
}
