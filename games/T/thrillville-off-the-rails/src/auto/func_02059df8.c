#include "m2c.h"

s32 func_020597b0();                                /* extern */
s32 func_020643b4(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_02064538(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_020742ec(M2C_UNK);                         /* extern */
extern s32 data_020efca4;
extern M2C_UNK data_020efff8;
extern M2C_UNK data_020f00c0;
extern M2C_UNK data_020f00f8;

void func_02059df8(void) {
    s32 var_r0;

    if (M2C_FIELD(&data_020efff8, s32 *, 4) == 0) {
        var_r0 = func_020742ec(0x1A0);
        if (var_r0 != 0) {
            var_r0 = func_020597b0();
        }
        M2C_FIELD(&data_020efff8, s32 *, 4) = var_r0;
    }
    data_020efca4 = M2C_FIELD(&data_020efff8, s32 *, 4);
    func_02064538(&data_020f00f8, func_020643b4(&data_020f00f8, 0x58, 0x58), 0x58, 0x58);
    func_02064538(&data_020f00c0, func_020643b4(&data_020f00c0, 0x28, 0x28), 0x28, 0x28);
}
