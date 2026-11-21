#include "m2c.h"

M2C_UNK *func_ov000_02212f80(s32, M2C_UNK);         /* extern */
s32 func_ov000_02212f20(M2C_UNK *);                 /* extern */
M2C_UNK func_ov000_02212cf0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_ov000_0221a53c;

void func_ov000_02212fe4(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *var_r8;
    M2C_UNK *var_r7;

    var_r8 = func_ov000_02212f80(arg1 + 1, 0x5C);
    if (var_r8 == NULL) {
        return;
    }
    do {
        var_r7 = func_ov000_02212f80(0, 0x5C);
        if (var_r7 == NULL) {
            var_r7 = &data_ov000_0221a53c;
        }
        if (func_ov000_02212f20(var_r8) != 0) {
            func_ov000_02212cf0(arg0, var_r8, var_r7);
        }
        var_r8 = func_ov000_02212f80(0, 0x5C);
    } while (var_r8 != NULL);
}
