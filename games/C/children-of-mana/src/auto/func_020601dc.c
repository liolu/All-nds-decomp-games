/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205e4bc(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0205e724(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0205e888(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0205e928(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0205e9cc(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0205eb1c(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0205eb80(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0205ebe8(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_0205fdf8(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_02060830();                                /* extern */

void func_020601dc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02060830();
    if (func_0205eb1c(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0205ebe8(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0205e928(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0205eb80(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0205e9cc(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0205e888(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0205e724(temp_r0, arg0, arg1) != 0) {
        return;
    }
    if (func_0205e4bc(temp_r0, arg0, arg1) != 0) {
        return;
    }
    func_0205fdf8(arg0, 0xFFFF, 0);
}
