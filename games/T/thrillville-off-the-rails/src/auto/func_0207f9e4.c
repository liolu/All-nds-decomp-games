#include "m2c.h"

extern void *data_020fa9a4;

s32 func_0207f9e4(void) {
    s32 *var_r0;
    s32 temp_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(data_020fa9a4, void **, 0x48);
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 8);
    if (temp_r0 == 0) {
        var_r0 = NULL;
    } else {
        var_r0 = temp_r1 + temp_r0;
    }
    if (var_r0 == NULL) {
        return 0;
    }
    return *var_r0;
}
