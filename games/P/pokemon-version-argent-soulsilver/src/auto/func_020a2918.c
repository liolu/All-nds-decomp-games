#include "m2c.h"

M2C_UNK func_020d2108(M2C_UNK);                     /* extern */
M2C_UNK func_020a3c38(M2C_UNK);                     /* extern */
M2C_UNK func_020a3c48();                            /* extern */
s32 func_020a0b0c();                                /* extern */
s32 func_020a2a64();                                /* extern */
extern void *data_02110648;
extern s32 data_021d4690;
extern s32 data_021d4444;
extern M2C_UNK data_021d4450;

s32 func_020a2918(void) {
    s32 temp_r0;

    if (data_021d4444 == 0) {
        data_021d4444 = data_021d4690;
    }
    if (func_020a2a64() == -0x1A) {
        do {
            func_020d2108(0x64);
        } while (func_020a2a64() == -0x1A);
    }
    temp_r0 = func_020a0b0c();
    if (temp_r0 >= 0) {
        func_020a3c48();
        func_020a3c38(0);
        if (M2C_FIELD(data_02110648, s32 *, 0x28) == 0) {
            M2C_FIELD(data_02110648, M2C_UNK(**)(s32), 0x1C)(M2C_FIELD(&data_021d4450, s32 *, 0x1C));
        }
        data_02110648 = NULL;
    }
    return temp_r0;
}
