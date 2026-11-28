#include "m2c.h"

M2C_UNK func_02074314(void **);                     /* extern */

void func_0209b7f8(void *arg0, void **arg1, s32 arg2) {
    void **temp_r2_2;
    void *temp_r2;

    if (arg2 != 0) {
        if (arg1 != NULL) {
            temp_r2 = M2C_FIELD(arg1, void **, 0);
            if (temp_r2 != NULL) {
                M2C_FIELD(temp_r2, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
            }
            temp_r2_2 = M2C_FIELD(arg1, void ***, 4);
            if (temp_r2_2 != NULL) {
                *temp_r2_2 = M2C_FIELD(arg1, void **, 0);
            }
            M2C_FIELD(arg1, void **, 0)  = NULL;
            M2C_FIELD(arg1, void ***, 4) = NULL;
            func_02074314(arg1);
        }
    } else {
        M2C_FIELD(arg1, void ***, 4)   = (void **) M2C_FIELD(arg0, void ***, 0xC);
        M2C_FIELD(arg0, void ***, 0xC) = arg1;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - 1);
}
