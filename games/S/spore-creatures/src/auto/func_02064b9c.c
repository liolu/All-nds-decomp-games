#include "m2c.h"

M2C_UNK func_02088798(s32);                         /* extern */
M2C_UNK func_02088894(s32, M2C_UNK);                /* extern */

void *func_02064b9c(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    func_02088894(arg0 + 0x18, 0xA);
    func_02088798(arg0 + 0x18);
    var_r1 = M2C_FIELD(arg0, void ***, 8);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 8;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0xC);
    }
    return arg0;
}
