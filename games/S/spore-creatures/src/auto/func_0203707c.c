#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_020cfb60(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02036f24;

void **func_0203707c(void **arg0) {
    void **var_r1;
    void *temp_r0;
    void *temp_r4;
    void *var_r2;

    temp_r4 = *arg0;
    if (temp_r4 != NULL) {
        var_r1 = M2C_FIELD(temp_r4, void ***, 0x4C);
        if (var_r1 != NULL) {
            var_r2  = *var_r1;
            temp_r0 = temp_r4 + 0x4C;
            if (var_r2 != temp_r0) {
                do {
                    var_r1 = var_r2 + 4;
                    var_r2 = M2C_FIELD(var_r2, void **, 4);
                } while (var_r2 != temp_r0);
            }
            *var_r1 = M2C_FIELD(temp_r4, void **, 0x50);
        }
        func_020cfb60(temp_r4 + 4, 9, 8, &func_02036f24);
        func_020934a8(temp_r4);
    }
    return arg0;
}
