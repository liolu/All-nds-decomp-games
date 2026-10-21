#include "m2c.h"

void func_0204965c(void **arg0, s32 arg1) {
    void *temp_ip;

    temp_ip = *arg0;
    if (temp_ip == NULL) {
        return;
    }
    M2C_FIELD(temp_ip, s32 *, 0x38) = (s32) (M2C_FIELD(temp_ip, s32 *, 0x38) | 1);
    M2C_FIELD(temp_ip, s32 *, 0x30) = 0;
    M2C_FIELD(temp_ip, s32 *, 0x34) = arg1;
    *arg0                           = NULL;
}
