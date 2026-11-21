#include "m2c.h"

M2C_UNK *func_0209519c();                           /* extern */
extern M2C_UNK data_020d3cc4;
extern M2C_UNK data_020d4608;

void func_02094b40(void) {
    M2C_UNK *var_r0;
    s32 temp_r1;

    temp_r1                                = M2C_FIELD(&data_020d3cc4, s32 *, 0x44) + 1;
    M2C_FIELD(&data_020d3cc4, s32 *, 0x44) = temp_r1;
    if (temp_r1 != 1) {
        return;
    }
    var_r0 = &data_020d4608;
    if (&data_020d4608 != NULL) {
        var_r0 = func_0209519c();
    }
    M2C_FIELD(&data_020d3cc4, M2C_UNK **, 0x2C) = var_r0;
}
