#include "m2c.h"

s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
M2C_UNK func_02025660(s32, s32);                    /* extern */
M2C_UNK func_0202659c(s32);                         /* extern */
M2C_UNK func_0207fcec(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0207fcc4(M2C_UNK);                         /* extern */
s32 func_0207f700(s32);                             /* extern */

void func_02080800(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg2 != 0) {
        temp_r4 = func_02024624();
        temp_r5 = func_0207f700(arg2);
        if (arg0 == func_0207fcc4(arg3)) {
            func_0207fcec(arg3, 0);
        }
        func_0207f700(temp_r5);
        func_02024638(temp_r4);
    }
    func_02025660(arg0, arg0 + arg1);
    func_0202659c(arg0);
}
