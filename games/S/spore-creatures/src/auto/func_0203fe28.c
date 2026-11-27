#include "m2c.h"

M2C_UNK func_020402dc(s32);                         /* extern */

void *func_0203fe28(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    func_020402dc(arg0 + 0x30);
    var_r1 = M2C_FIELD(arg0, void ***, 0x14);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 0x14;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x18);
    }
    return arg0;
}
