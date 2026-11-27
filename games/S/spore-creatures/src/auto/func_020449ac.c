#include "m2c.h"

M2C_UNK func_0203631c(s32);                         /* extern */
M2C_UNK func_02045f6c(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */

void *func_020449ac(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    func_0203631c(arg0 + 0x88);
    var_r1 = M2C_FIELD(arg0, void ***, 0x80);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 0x80;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x84);
    }
    func_02045f6c(arg0);
    func_020934a8(arg0);
    return arg0;
}
