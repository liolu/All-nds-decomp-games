#include "m2c.h"

s32 func_0206e7cc(void *arg0) {
    void *var_r0;

    var_r0 = arg0;
    if (var_r0 != NULL) {
        do {
            if (M2C_FIELD(var_r0, u8 *, 5) == 1) {
                M2C_FIELD(var_r0, u8 *, 5) = 0U;
            }
            var_r0 = M2C_FIELD(var_r0, void **, 0xC4);
        } while (var_r0 != NULL);
    }
    return 0;
}
