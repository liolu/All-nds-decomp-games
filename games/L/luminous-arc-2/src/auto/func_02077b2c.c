#include "m2c.h"

s32 func_02037798(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_0206c210(M2C_UNK);                     /* extern */
extern M2C_UNK data_0211b7d8;
extern M2C_UNK data_0211b7ec;
extern M2C_UNK data_02158048;
extern u8 data_021701c0;

void func_02077b2c(void) {
    M2C_UNK *var_r0;

    if (data_021701c0 == 0) {
        var_r0 = &data_0211b7d8;
    } else {
        var_r0 = &data_0211b7ec;
    }
    if (func_02037798(var_r0, 0) == 0) {
        return;
    }
    func_0206c210(0x10);
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
