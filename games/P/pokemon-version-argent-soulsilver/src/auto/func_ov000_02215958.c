#include "m2c.h"

s32 func_ov000_022133bc();                          /* extern */
s32 func_ov000_022132e4(void *, s32, u16);          /* extern */
s32 func_ov000_02214c80(void *, s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_ov000_02214c10(void *, M2C_UNK, s32, s32 *, u16 *); /* extern */
s32 func_ov000_02213e1c(void *, s32);               /* extern */
s32 func_ov000_02213d1c(void *, s32, u16);          /* extern */
M2C_UNK func_ov000_02213c8c(void *, s32);           /* extern */

s32 func_ov000_02215958(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 sp8;
    u16 sp4;
    s32 var_r5;
    s32 temp_r0;

    if (arg2 < 5) {
        return 4;
    }
    func_ov000_02214c10(arg0, arg1, arg2, &sp8, &sp4);
    temp_r0 = func_ov000_02213d1c(arg0, sp8, sp4);
    if (temp_r0 == -1) {
        var_r5 = func_ov000_022132e4(arg0, sp8, sp4);
        if (func_ov000_022133bc() != 0) {
            return 5;
        }
        goto block_6;
    }
    var_r5 = func_ov000_02213e1c(arg0, temp_r0);
block_6:
    if (func_ov000_02214c80(arg0, var_r5, arg1, arg2, 0) < 0) {
        return 4;
    }
    if (temp_r0 == -1) {
        func_ov000_02213c8c(arg0, var_r5);
    }
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 1, var_r5, M2C_FIELD(arg0, s32 *, 0x494));
    return 0;
}
