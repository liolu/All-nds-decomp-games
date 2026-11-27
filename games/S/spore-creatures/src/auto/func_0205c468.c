#include "m2c.h"

M2C_UNK func_02021550(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02021724(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0205db7c(s32, void *, M2C_UNK);        /* extern */
s32 func_02094d64(M2C_UNK, M2C_UNK);                /* extern */

void func_0205c468(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    void *var_r4;

    temp_r0 = func_02094d64(0, 0);
    func_02021550(arg0 + 0x98, arg1, temp_r0);
    func_02021724(arg0 + 0x98, arg2, temp_r0);
    var_r4 = M2C_FIELD(arg0, void **, 0xB4);
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_0205db7c(M2C_FIELD(var_r4, s32 *, 0), arg0 + 0x98, arg2);
        var_r4 = M2C_FIELD(var_r4, void **, 4);
    } while (var_r4 != NULL);
}
