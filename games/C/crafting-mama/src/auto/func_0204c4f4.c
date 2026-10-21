#include "m2c.h"

M2C_UNK func_020293f8(void **);                     /* extern */
M2C_UNK func_0205e6a8(void *);                      /* extern */

void func_0204c4f4(void **arg0) {
    void *temp_r2;

    if (arg0 != NULL) {
        temp_r2 = *arg0;
        if (temp_r2 != NULL) {
            if (M2C_FIELD(temp_r2, s32 *, 0x1C) != 0x7B058A0B) {
                return;
            }
            func_0205e6a8(temp_r2 + 0x24);
            func_020293f8(arg0);
        }
    }
}
