#include "m2c.h"

M2C_UNK func_0208a2c8(M2C_UNK, s32);                /* extern */
s32 func_0208d40c(M2C_UNK);                         /* extern */
M2C_UNK func_0208e48c();                            /* extern */
M2C_UNK func_0208e5f0();                            /* extern */
void *func_02090a40();                              /* extern */
M2C_UNK func_02090a50(M2C_UNK);                     /* extern */
M2C_UNK func_020bf7e8(s32);                         /* extern */

s32 func_0208d754(void) {
    s32 var_r4;
    void *temp_r5;

    var_r4 = 1;
    if (M2C_FIELD(func_02090a40(), u8 *, 0x15) == 3) {
        if (M2C_FIELD(func_02090a40(), u8 *, 0xD) != 0) {
            func_0208e5f0();
        }
        func_0208a2c8(6, 0xFFFEC5D2);
        return 0;
    }
    temp_r5                                  = func_02090a40();
    M2C_FIELD(temp_r5, u8 *, 0x14)           = (u8) M2C_FIELD(func_02090a40(), u8 *, 0xD);
    M2C_FIELD(func_02090a40(), s32 *, 0x208) = 0;
    if (M2C_FIELD(func_02090a40(), s32 *, 0x19C) != 0) {
        func_020bf7e8(M2C_FIELD(func_02090a40(), s32 *, 0x19C));
        M2C_FIELD(func_02090a40(), s32 *, 0x19C) = 0;
    }
    if (M2C_FIELD(func_02090a40(), u8 *, 0xD) != 0) {
        func_0208e48c();
    } else {
        func_02090a50(4);
        var_r4 = func_0208d40c(0);
    }
    return var_r4;
}
