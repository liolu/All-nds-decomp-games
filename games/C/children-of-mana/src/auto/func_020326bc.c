#include "m2c.h"

M2C_UNK func_0203275c(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_020fd240;
extern M2C_UNK data_020fd254;
extern M2C_UNK data_02115510;

void func_020326bc(s32 arg0) {
    M2C_UNK *var_r1;

    if (arg0 != 0) {
        var_r1 = &data_020fd240;
    } else {
        var_r1 = &data_020fd254;
    }
    func_0203275c(&data_02115510, var_r1);
}
