#include "m2c.h"

s32 func_02034ffc(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 data_020d1d24;

s32 func_020350a8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;
    void *var_r3;

    var_r3 = data_020d1d24 + 0x1C94;
    var_r0 = 0x1F;
loop_1:
    if (M2C_FIELD(var_r3, u8 *, 0x6A8) == 0) {
        return func_02034ffc(var_r0, arg0, arg1);
    }
    var_r3 -= 0xEC;
    var_r0 -= 1;
    if (var_r0 < 0) {
        return -1;
    }
    goto loop_1;
}
