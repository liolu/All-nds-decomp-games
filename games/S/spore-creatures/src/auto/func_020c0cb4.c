#include "m2c.h"

M2C_UNK func_020b6f24();                            /* extern */
M2C_UNK func_020c0d10();                            /* extern */
extern M2C_UNK data_020f4360;

void func_020c0cb4(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (M2C_FIELD(&data_020f4360, s32 *, 0xC) != 0) {
            return;
        }
        var_r0 = 0;
        if (M2C_FIELD(&data_020f4360, s32(**)(), 0x18) != NULL) {
            var_r0 = M2C_FIELD(&data_020f4360, s32(**)(), 0x18)();
        }
        if (var_r0 != 0) {
            func_020c0d10();
        }
        M2C_FIELD(&data_020f4360, s32 *, 0xC) = 1;
        return;
    }
    func_020b6f24();
}
