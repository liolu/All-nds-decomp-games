#include "m2c.h"

M2C_UNK func_02088798(void *);                      /* extern */
M2C_UNK func_02088894(void *, M2C_UNK);             /* extern */

void *func_02065ee4(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    if (M2C_FIELD(arg0, u8 *, 0x61) == 0) {
        func_02088894(arg0, 0xA);
    }
    var_r1 = M2C_FIELD(arg0, void ***, 0x50);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 0x50;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x54);
    }
    func_02088798(arg0);
    return arg0;
}
