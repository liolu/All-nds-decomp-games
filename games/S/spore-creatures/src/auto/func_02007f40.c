#include "m2c.h"

M2C_UNK func_0208fe44(M2C_UNK);                     /* extern */
extern M2C_UNK data_020e0c00;

void func_02007f40(s32 arg0) {
    M2C_UNK var_r0;

    M2C_FIELD(&data_020e0c00, s32 *, 4) = arg0;
    if (arg0 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    func_0208fe44(var_r0);
}
