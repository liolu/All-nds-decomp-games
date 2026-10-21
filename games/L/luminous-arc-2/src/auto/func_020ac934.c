#include "m2c.h"

M2C_UNK func_020ad618(void **);                     /* extern */
M2C_UNK func_020b1fa0(void **, M2C_UNK);            /* extern */

void func_020ac934(void **arg0) {
    void *temp_r1;

    if (arg0 != NULL) {
        temp_r1 = *arg0;
        if (temp_r1 != NULL) {
            if (M2C_FIELD(temp_r1, s32 *, 0x108) != 0) {
                return;
            }
            func_020b1fa0(arg0, 1);
            func_020ad618(arg0);
        }
    }
}
