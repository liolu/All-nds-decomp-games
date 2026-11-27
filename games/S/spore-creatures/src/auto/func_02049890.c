#include "m2c.h"

s32 func_02064b70();                                /* extern */
M2C_UNK func_02064b9c(s32);                         /* extern */
M2C_UNK func_02064bf4(s32, s32, s32);               /* extern */
M2C_UNK func_02064d0c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02064d50(s32, s32);                    /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */

void func_02049890(void *arg0) {
    s32 temp_r4;
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
        return;
    }
    var_r0 = func_02093480(0x20);
    if (var_r0 != 0) {
        var_r0 = func_02064b70();
    }
    temp_r4                      = M2C_FIELD(arg0, s32 *, 0xB8);
    M2C_FIELD(arg0, s32 *, 0xB8) = var_r0;
    if (temp_r4 != 0) {
        func_02064b9c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_02064d50(M2C_FIELD(arg0, s32 *, 0xB8), M2C_FIELD(arg0, s32 *, 0xC8));
    func_02064d0c(M2C_FIELD(arg0, s32 *, 0xB8), 0x7E);
    func_02064bf4(M2C_FIELD(arg0, s32 *, 0xB8), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, s32 *, 0xC0));
}
