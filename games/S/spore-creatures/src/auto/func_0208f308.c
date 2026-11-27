#include "m2c.h"

M2C_UNK func_01ffba64(s32, s32, s32);               /* extern */
s32 func_0209312c(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0209318c(s32);                         /* extern */
M2C_UNK func_020b3bf0();                            /* extern */
M2C_UNK func_020b3c90(s32, s32, s32);               /* extern */
M2C_UNK func_020b3d00();                            /* extern */
M2C_UNK func_020b3d48();                            /* extern */
M2C_UNK func_020b3d90(s32, s32, s32);               /* extern */
M2C_UNK func_020b3dfc();                            /* extern */
M2C_UNK func_020b3e40();                            /* extern */
M2C_UNK func_020b3e58(s32, s32, s32);               /* extern */
M2C_UNK func_020b3ebc();                            /* extern */
M2C_UNK func_020b3efc();                            /* extern */
M2C_UNK func_020b3f14(s32, s32, s32);               /* extern */
M2C_UNK func_020b3f78();                            /* extern */
M2C_UNK func_020b5bc0(s32, s32);                    /* extern */

void func_0208f308(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r5;
    s32 var_r9;

    var_r9 = arg0;
    var_r5 = 0;
    if (var_r9 & 3) {
        temp_r4 = arg3 * 2;
        temp_r0 = func_0209312c(temp_r4, 2, 4);
        var_r5  = temp_r0;
        func_01ffba64(temp_r0, var_r9, temp_r4);
        var_r9 = var_r5;
    }
    temp_r4_2 = arg3 * 2;
    func_020b5bc0(var_r9, temp_r4_2);
    if (arg5 == 0) {
        if (arg4 == 0) {
            func_020b3bf0();
            func_020b3c90(var_r9, (arg2 + (arg1 << 0xC)) * 2, temp_r4_2);
            func_020b3d00();
        } else if (arg4 == 1) {
            func_020b3d48();
            func_020b3d90(var_r9, (arg2 + (arg1 << 0xC)) * 2, temp_r4_2);
            func_020b3dfc();
        }
    } else if (arg4 == 0) {
        func_020b3e40();
        func_020b3e58(var_r9, (arg2 + (arg1 << 0xC)) * 2, temp_r4_2);
        func_020b3ebc();
    } else if (arg4 == 1) {
        func_020b3efc();
        func_020b3f14(var_r9, (arg2 + (arg1 << 0xC)) * 2, temp_r4_2);
        func_020b3f78();
    }
    if (var_r5 == 0) {
        return;
    }
    func_0209318c(var_r5);
}
