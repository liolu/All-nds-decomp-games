#include "m2c.h"

s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
s32 func_0203b418(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_0215faf0;

void func_0203ee18(void) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = func_02038e10();
    if (func_0203b418(6, 0x03000000, 0) >= 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        func_02038e24(temp_r4);
        M2C_FIELD(&data_0215faf0, u16 *, 0x38) = (u16) (M2C_FIELD(&data_0215faf0, u16 *, 0x38) | 1);
        if (M2C_FIELD(&data_0215faf0, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4) == NULL) {
            return;
        }
        M2C_FIELD(&data_0215faf0, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4)(0, 4, 0);
        return;
    }
    M2C_FIELD(&data_0215faf0, u16 *, 0x3A) = (u16) (M2C_FIELD(&data_0215faf0, u16 *, 0x3A) | 1);
    M2C_FIELD(&data_0215faf0, u16 *, 0x38) = (u16) (M2C_FIELD(&data_0215faf0, u16 *, 0x38) & ~1);
    func_02038e24(temp_r4);
}
