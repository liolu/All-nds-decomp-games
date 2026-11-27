#include "m2c.h"

M2C_UNK func_0205c39c(void *, s32);                 /* extern */
M2C_UNK func_02093234(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0205c424(void *arg0) {
    void *temp_r4;
    void *var_r0;

    var_r0 = M2C_FIELD(arg0, void **, 0xB4);
    if (var_r0 != NULL) {
        do {
            temp_r4 = M2C_FIELD(var_r0, void **, 4);
            func_0205c39c(arg0, M2C_FIELD(var_r0, s32 *, 0));
            var_r0 = temp_r4;
        } while (temp_r4 != NULL);
    }
    func_02093234(arg0 + 0x110, 0, 8, 8);
}
