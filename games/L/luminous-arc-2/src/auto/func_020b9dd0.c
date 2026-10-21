#include "m2c.h"

M2C_UNK *func_020b9cfc();                           /* extern */
extern M2C_UNK data_0212ec6c;

M2C_UNK *func_020b9dd0(void) {
    M2C_UNK *var_r0;

    var_r0 = func_020b9cfc();
    if (var_r0 == NULL) {
        var_r0 = &data_0212ec6c;
    }
    return var_r0;
}
