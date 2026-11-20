#include "m2c.h"

s32 func_0201b47c();                         /* extern */
M2C_UNK func_0201b498();                    /* extern */
M2C_UNK func_0201b5b0();                /* extern */
s32 func_020ab2dc();                             /* extern */
M2C_UNK func_020ab30c();                         /* extern */
M2C_UNK func_020b9a08();                    /* extern */
s32 func_020b9a84();                             /* extern */
s32 func_020b9aa4();                                /* extern */

s32 func_020b985c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = func_020b9aa4();
    if (temp_r0 == 0) {
        return 0;
    }
    temp_r5   = func_020b9a84();
    temp_r4   = func_0201b47c();
    temp_r0_2 = func_020ab2dc(temp_r4 + func_0201b47c(arg2) + 1);
    func_0201b498(temp_r0_2, temp_r5);
    func_0201b5b0(temp_r0_2, arg2);
    func_020b9a08(temp_r0, temp_r0_2);
    func_020ab30c(temp_r0_2);
    return func_020b9a84(temp_r0);
}
