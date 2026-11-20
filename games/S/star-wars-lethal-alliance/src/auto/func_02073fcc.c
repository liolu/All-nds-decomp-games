/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020724e4(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0207274c(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020728b0(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02072950(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_020729f4(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02072b44(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02072ba8(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02072c10(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02073e44(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_02074770();                                /* extern */

void func_02073fcc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02074770();
    if (func_02072b44(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_02072c10(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_02072950(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_02072ba8(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_020729f4(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_020728b0(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0207274c(temp_r0, arg0, arg1) != 0) {
        return;
    }
    if (func_020724e4(temp_r0, arg0, arg1) != 0) {
        return;
    }
    func_02073e44(arg0, 0xFFFF, 0);
}
