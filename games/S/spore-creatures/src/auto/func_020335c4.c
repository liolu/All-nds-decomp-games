#include "m2c.h"

M2C_UNK func_02033564(M2C_UNK, s32);                /* extern */

void func_020335c4(M2C_UNK arg0, void *arg1) {
    void *var_r4;

    var_r4 = M2C_FIELD(arg1, void **, 0x274);
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_02033564(arg0, **M2C_FIELD(var_r4, s32 ***, 0));
        var_r4 = M2C_FIELD(var_r4, void **, 4);
    } while (var_r4 != NULL);
}
