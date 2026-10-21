#include "m2c.h"

M2C_UNK func_0200766c(void *, M2C_UNK, M2C_UNK);    /* extern */
u32 func_0207baac();                                /* extern */
extern M2C_UNK data_0217024c;

s32 func_0207b650(M2C_UNK arg0) {
    s32 var_r4;
    u32 temp_r0;
    u8 temp_r0_2;

    var_r4  = 0;
    temp_r0 = func_0207baac();
    if ((temp_r0 >= 0xAU) && (temp_r0 <= 0x10U)) {
        temp_r0_2 = M2C_FIELD(M2C_FIELD(&data_0217024c, void **, 0xC), u8 *, 0x17);
        if ((temp_r0_2 != 4) && (temp_r0_2 != 8)) {

        } else {
            func_0200766c(M2C_FIELD(&data_0217024c, void **, 0xC) + 0x18, arg0, 0xA);
            var_r4 = 1;
        }
    }
    return var_r4;
}
