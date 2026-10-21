#include "m2c.h"

s32 func_020039f4(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK data_02086340;

s32 func_02042460(void **arg0) {
    s32 var_r0;
    void *temp_r4;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r4 = *arg0;
    if (temp_r4 == NULL) {
        return 0;
    }
    if (func_020039f4(temp_r4 + 0x1C, &data_02086340) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(temp_r4, s32 *, 0x24) = var_r0;
    M2C_FIELD(temp_r4, s32 *, 0x10) = 1;
    *arg0                           = NULL;
    return 1;
}
