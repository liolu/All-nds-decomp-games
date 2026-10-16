#include "m2c.h"

M2C_UNK func_020b5ba4(void *, M2C_UNK);             /* extern */
M2C_UNK func_020b7f98();                            /* extern */
M2C_UNK func_020b7fac();                            /* extern */

void func_020b8abc(void *arg0) {
    void *temp_r6;
    void *var_r0;

    func_020b7f98();
    var_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (var_r0 != NULL) {
        do {
            temp_r6                       = M2C_FIELD(var_r0, void **, 4);
            M2C_FIELD(var_r0, s32 *, 0)   = 0;
            M2C_FIELD(var_r0, void **, 4) = NULL;
            func_020b5ba4(var_r0, 8);
            var_r0 = temp_r6;
        } while (temp_r6 != NULL);
    }
    func_020b7fac();
}
