#include "m2c.h"

M2C_UNK func_02077480(s32, s8);                     /* extern */

void func_02076008(void *arg0, s8 arg1) {
    void *var_r4;

    M2C_FIELD(arg0, s8 *, 0x55) = arg1;
    M2C_FIELD(arg0, u16 *, 8)   = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x10);
    var_r4                      = M2C_FIELD(arg0, void **, 0xB8);
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_02077480(var_r4 + 0x5C, arg1);
        var_r4 = M2C_FIELD(var_r4, void **, 0x158);
    } while (var_r4 != NULL);
}
