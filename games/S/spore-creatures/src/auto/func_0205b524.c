#include "m2c.h"

M2C_UNK func_0205da80(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0205b524(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK var_r5;
    void *var_r4;

    var_r4 = M2C_FIELD(arg0, void **, 0xB4);
    if (M2C_FIELD(arg0, volatile s32 *, 0x110) == 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_0205da80(M2C_FIELD(var_r4, volatile s32 *, 0), arg1, arg2, var_r5);
        var_r4 = M2C_FIELD(var_r4, void **, 4);
    } while (var_r4 != NULL);
}
