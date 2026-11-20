#include "m2c.h"

s32 func_0209cd3c();                                /* extern */
M2C_UNK func_020aa870(s32, M2C_UNK);                /* extern */

void func_020aaa20(s32 arg0, u8 *arg1, s32 *arg2) {
    s32 temp_r0;

    *arg1   = (u8) *arg2;
    temp_r0 = func_0209cd3c(arg0);
    *arg2   = (s32) *arg1;
    func_020aa870(temp_r0, -1);
}
