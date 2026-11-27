#include "m2c.h"

M2C_UNK func_02058d1c(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_020cfb60(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02020c40;

void *func_02048c28(void *arg0) {
    void **var_r1;
    void *temp_r0;
    void *var_r2;

    func_020cfb60(arg0 + 0x3C, 5, 4, &func_02020c40);
    var_r1 = M2C_FIELD(arg0, void ***, 0x34);
    if (var_r1 != NULL) {
        var_r2  = *var_r1;
        temp_r0 = arg0 + 0x34;
        if (var_r2 != temp_r0) {
            do {
                var_r1 = var_r2 + 4;
                var_r2 = M2C_FIELD(var_r2, void **, 4);
            } while (var_r2 != temp_r0);
        }
        *var_r1 = M2C_FIELD(arg0, void **, 0x38);
    }
    func_02058d1c(arg0);
    func_020934a8(arg0);
    return arg0;
}
