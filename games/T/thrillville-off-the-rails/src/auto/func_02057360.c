#include "m2c.h"

s32 func_0203bedc();                                /* extern */
M2C_UNK func_020573bc(s32, M2C_UNK, M2C_UNK *);     /* extern */
s32 func_02057658(s32, void *);                     /* extern */
extern M2C_UNK data_020fbafc;

void **func_02057360(void **arg0, void **arg1) {
    M2C_UNK *var_r4;
    s32 temp_r0;
    void *temp_r1;
    void *temp_r5;

    temp_r1 = *arg1;
    *arg0   = temp_r1;
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) + 1);
    }
    temp_r5 = *arg0;
    if (temp_r5 != NULL) {
        var_r4  = M2C_FIELD(temp_r5, M2C_UNK **, 0x10);
        temp_r0 = func_02057658(func_0203bedc(), temp_r5 + 8);
        if (var_r4 == NULL) {
            var_r4 = &data_020fbafc;
        }
        func_020573bc(temp_r0, 1, var_r4);
    }
    return arg0;
}
