#include "m2c.h"

void func_020ede94(void **arg0) {
    void *temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s16 *, 8) = 0;
    }
}
