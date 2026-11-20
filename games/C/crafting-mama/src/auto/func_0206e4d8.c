#include "m2c.h"

s32 func_020039f4(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK data_02090dcc;

void func_0206e4d8(void *arg0, s32 arg1) {
    s32 var_r0;

    if (arg0 == NULL) {
        return;
    }
    if (func_020039f4(arg0 + 0x1C, &data_02090dcc) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}
