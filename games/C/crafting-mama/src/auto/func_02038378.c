#include "m2c.h"

s32 func_020039f4(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK data_02085090;

void func_02038378(void *arg0) {
    s32 var_r0;

    if (arg0 == NULL) {
        return;
    }
    if (func_020039f4(arg0 + 0x1C, &data_02085090) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
}
