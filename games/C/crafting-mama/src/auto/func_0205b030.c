#include "m2c.h"

M2C_UNK func_020293f8(void **);                     /* extern */
M2C_UNK func_0205e6a8(void *);                      /* extern */

void func_0205b030(void **arg0) {
    void *temp_r2;

    if (arg0 != NULL) {
        temp_r2 = *arg0;
        if (temp_r2 != NULL) {
            if (M2C_FIELD(temp_r2, s32 *, 0x1C) != 0x5AA55AA4) {
                return;
            }
            func_0205e6a8(temp_r2 + 0x24);
            func_020293f8(arg0);
        }
    }
}
