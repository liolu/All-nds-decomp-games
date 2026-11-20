#include "m2c.h"

M2C_UNK func_02066304(u16 *, M2C_UNK);              /* extern */
s32 func_020702e4();                                /* extern */
extern M2C_UNK data_020e8cc0;

s32 func_02070300(void) {
    s32 temp_r0;

    temp_r0 = func_020702e4();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02066304(M2C_FIELD(M2C_FIELD(&data_020e8cc0, void **, 4), u16 **, 4), 2);
    if ((u32) *M2C_FIELD(M2C_FIELD(&data_020e8cc0, void **, 4), u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
