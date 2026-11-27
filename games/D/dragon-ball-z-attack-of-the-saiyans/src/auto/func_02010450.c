#include "m2c.h"

M2C_UNK func_02010508(void *);                      /* extern */
s32 func_02010b78(void *);                          /* extern */

void func_02010450(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    void *temp_r1;
    void *var_r0;

    temp_r1 = M2C_FIELD(arg0, void **, 0x10);
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 8);
    if (temp_r0 == 0) {
        var_r0 = NULL;
    } else {
        var_r0 = temp_r1 + temp_r0;
    }
    temp_r4 = M2C_FIELD(var_r0, s32 *, 8);
    do {
        if ((s32) M2C_FIELD(arg0, s32 *, 0) > temp_r4) {
            func_02010508(arg0);
        }
    } while (func_02010b78(arg0) == 0);
}
