#include "m2c.h"

void *func_020b0b28(void **arg0) {
    void *temp_r1;

    temp_r1 = *arg0;
    return temp_r1 + 0x80 + M2C_FIELD(temp_r1, s32 *, 0x80);
}
