#include "m2c.h"

s32 func_0202f3cc(s32, s32);                        /* extern */
M2C_UNK func_0202f408(s32);                         /* extern */
s32 func_02093468(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */
extern M2C_UNK data_020e0bcc;

void func_02029824(void *arg0) {
    s32 temp_r4;
    s32 var_r0;

    var_r0 = func_02093468(0xC, 2, -4);
    if (var_r0 != 0) {
        var_r0 = func_0202f3cc(var_r0, M2C_FIELD(&data_020e0bcc, u8 *, 0x2A) << 0xB);
    }
    temp_r4                       = M2C_FIELD(arg0, s32 *, 0x56C);
    M2C_FIELD(arg0, s32 *, 0x56C) = var_r0;
    if (temp_r4 == 0) {
        return;
    }
    func_0202f408(temp_r4);
    func_020934a8(temp_r4);
}
