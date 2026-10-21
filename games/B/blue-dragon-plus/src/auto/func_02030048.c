#include "m2c.h"

s32 func_0202f1c0(s32);                             /* extern */
s32 func_0202f5dc(M2C_UNK);                         /* extern */
M2C_UNK func_0202f604(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */

void func_02030048(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_02038e10();
    temp_r4 = func_0202f1c0(arg1);
    if (arg0 == func_0202f5dc(arg2)) {
        func_0202f604(arg2, 0);
    }
    func_0202f1c0(temp_r4);
    func_02038e24(temp_r5);
}
