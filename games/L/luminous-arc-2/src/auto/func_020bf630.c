#include "m2c.h"

M2C_UNK func_020049b8(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK func_020bf5f8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0212ed50;
extern M2C_UNK data_02173ca8;

void func_020bf630(M2C_UNK *arg0, s32 arg1) {
    u8 sp4[64];
    M2C_UNK *var_r0;

    var_r0 = arg0;
    if (var_r0 == NULL) {
        func_020049b8(sp4, 0x40, &data_0212ed50, &data_02173ca8, arg1);
        var_r0 = sp4;
    }
    func_020bf5f8(var_r0);
}
