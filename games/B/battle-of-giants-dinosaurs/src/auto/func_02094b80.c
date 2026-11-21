#include "m2c.h"

M2C_UNK func_02095240(s32);                         /* extern */
extern M2C_UNK data_020d3cc4;

void func_02094b80(void) {
    s32 temp_r1;

    temp_r1                                = M2C_FIELD(&data_020d3cc4, s32 *, 0x44) - 1;
    M2C_FIELD(&data_020d3cc4, s32 *, 0x44) = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    func_02095240(M2C_FIELD(&data_020d3cc4, s32 *, 0x2C));
    M2C_FIELD(&data_020d3cc4, s32 *, 0x2C) = 0;
}
