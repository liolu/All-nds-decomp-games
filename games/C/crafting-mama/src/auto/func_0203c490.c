#include "m2c.h"

M2C_UNK func_0203c4c0(void *);                      /* extern */

void func_0203c490(void **arg0) {
    void *temp_r4;

    if (arg0 != NULL) {
        temp_r4 = *arg0;
        if (temp_r4 != NULL) {
            func_0203c4c0(temp_r4);
            M2C_FIELD(temp_r4, s32 *, 0x10) = 1;
            *arg0                           = NULL;
        }
    }
}
