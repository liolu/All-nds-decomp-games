/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02027fb0(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02028218(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0202837c(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02028440(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02028500(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02028664(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_020286d8(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02028750(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02029998(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0202a688();                                /* extern */

void func_02029d88(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_0202a688();
    if (func_02028664(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_02028750(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_02028440(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_020286d8(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_02028500(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0202837c(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_02028218(temp_r0, arg0, arg1) != 0) {
        return;
    }
    if (func_02027fb0(temp_r0, arg0, arg1) != 0) {
        return;
    }
    func_02029998(arg0, 0xFFFF, 0);
}
