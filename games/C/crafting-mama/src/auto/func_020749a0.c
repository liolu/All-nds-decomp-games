#include "m2c.h"

s32 func_020039f4(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_020293f8(void **);                     /* extern */
extern M2C_UNK data_02091e2c;

void func_020749a0(void **arg0, s32 arg1) {
    void *sp0;
    s32 var_r0;
    void *temp_r5;

    if (arg0 != NULL) {
        temp_r5 = *arg0;
        if (temp_r5 != NULL) {
            sp0 = temp_r5;
            if (func_020039f4(temp_r5 + 0x1C, &data_02091e2c) != 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            M2C_FIELD(temp_r5, s32 *, 0x24) = var_r0;
            if (M2C_FIELD(sp0, s32 *, 0x24) == 1) {
                return;
            }
            if (arg1 == 0) {
                M2C_FIELD(sp0, s32 *, 0x28) = 0x14;
            } else {
                func_020293f8(&sp0);
            }
            *arg0 = NULL;
        }
    }
}
