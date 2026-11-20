#include "m2c.h"

M2C_UNK func_02076ab0(void *, void *);              /* extern */

void func_0207609c(void *arg0, void *arg1) {
    void *var_r4;

    var_r4 = M2C_FIELD(arg0, void **, 0xB8);
    if (var_r4 == NULL) {
        return;
    }
    do {
        if (M2C_FIELD(var_r4, u8 *, 0xD) == M2C_FIELD(arg1, u8 *, 2)) {
            func_02076ab0(arg0, var_r4);
        }
        var_r4 = M2C_FIELD(var_r4, void **, 0x158);
    } while (var_r4 != NULL);
}
