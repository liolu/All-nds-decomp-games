#include "m2c.h"

M2C_UNK func_02022e2c(s32, s32);                    /* extern */
s32 func_0207dfb4(s32, s32, M2C_UNK *, s32, s32);   /* extern */
s32 func_0207f718();                                /* extern */
s32 func_0207fb88(s32);                             /* extern */
s32 func_0207fbb0(s32, s32, s32, M2C_UNK, s32, s32); /* extern */
s32 func_0207fcc4();                                /* extern */
M2C_UNK func_0207fcec(s32, s32);                    /* extern */
extern M2C_UNK func_02080728;

s32 func_020803a8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 var_r6;
    s32 var_r6_2;

    var_r6 = func_0207fcc4();
    if (var_r6 == 0) {
        if (arg2 == 0) {
            var_r6_2 = 0;
        } else {
            var_r6_2 = func_0207f718();
        }
        temp_r0 = func_0207fb88(arg0);
        if (temp_r0 == 0) {
            var_r6 = 0;
        } else if (arg1 == 0) {
            var_r6 = 0;
        } else {
            var_r6 = func_0207dfb4(arg1, temp_r0 + 0x20, &func_02080728, var_r6_2, arg0);
            if (var_r6 == 0) {
                var_r6 = 0;
            } else if (temp_r0 != func_0207fbb0(arg0, var_r6, temp_r0, 0, arg3, arg4)) {
                var_r6 = 0;
            } else if (arg3 == 0) {
                func_02022e2c(var_r6, temp_r0);
            }
        }
        if ((arg2 != 0) && (var_r6 != 0)) {
            func_0207fcec(arg0, var_r6);
        }
    }
    return var_r6;
}
