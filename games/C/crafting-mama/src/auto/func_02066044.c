#include "m2c.h"

s32 func_020039f4(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_020293f8(void **);                     /* extern */
extern M2C_UNK data_02090970;

void func_02066044(void **arg0) {
    void *sp0;
    s32 var_r0;
    void *temp_r4;

    if (arg0 != NULL) {
        temp_r4 = *arg0;
        if (temp_r4 != NULL) {
            sp0 = temp_r4;
            if (func_020039f4(temp_r4 + 0x1C, &data_02090970) != 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            M2C_FIELD(temp_r4, s32 *, 0x20) = var_r0;
            if (M2C_FIELD(sp0, s32 *, 0x20) == 1) {
                return;
            }
            func_020293f8(&sp0);
            *arg0 = NULL;
        }
    }
}
