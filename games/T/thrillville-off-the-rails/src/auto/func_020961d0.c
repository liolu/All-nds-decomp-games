#include "m2c.h"

s32 func_020742ec(M2C_UNK);                         /* extern */
s32 func_020953f4();                                /* extern */
M2C_UNK func_02096224(s32);                         /* extern */
extern M2C_UNK data_020fc4a4;

void func_020961d0(void *arg0) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 8) = (s32) ((M2C_FIELD(arg0, s32 *, 8) | 2) & ~1);
    if (M2C_FIELD(&data_020fc4a4, s32 *, 4) == 0) {
        var_r0 = func_020742ec(0x32C);
        if (var_r0 != 0) {
            var_r0 = func_020953f4();
        }
        M2C_FIELD(&data_020fc4a4, s32 *, 4) = var_r0;
    }
    func_02096224(M2C_FIELD(&data_020fc4a4, s32 *, 4));
}
