#include "m2c.h"

M2C_UNK func_0200766c(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_020f7578;

void func_020420b8(u16 arg0, M2C_UNK arg1) {
    u16 var_r0;

    var_r0 = arg0;
    if (var_r0 != 0) {
        var_r0 -= 1;
    }
    func_0200766c((M2C_UNK *) ((s8 *) &data_020f7578 + (var_r0 * 4)), arg1, 4);
}
