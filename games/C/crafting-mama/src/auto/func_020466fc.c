#include "m2c.h"

void func_020466fc(void **arg0) {
    void *temp_r1;

    if (arg0 != NULL) {
        temp_r1 = *arg0;
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, s32 *, 0x10) = 1;
        }
    }
}
