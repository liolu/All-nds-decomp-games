#include "m2c.h"

M2C_UNK func_020712c4(void *);                      /* extern */
extern M2C_UNK data_0216fdb8;

s32 func_02070260(void) {
    void *var_r5;

    var_r5 = M2C_FIELD(&data_0216fdb8, void **, 0x130);
    if (var_r5 != NULL) {
        do {
            if (M2C_FIELD(var_r5, u8 *, 0x11) == 1) {
                M2C_FIELD(var_r5, u8 *, 0x11) = 0U;
                func_020712c4(var_r5);
            }
            var_r5 = M2C_FIELD(var_r5, void **, 0x47C);
        } while (var_r5 != NULL);
    }
    return 0;
}
