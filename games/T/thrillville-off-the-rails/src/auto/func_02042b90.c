#include "m2c.h"

void func_02042b90(s32 *arg0, void ***arg1, s32 *arg2, void ***arg3, void ***arg4, s32 arg5) {
    void **temp_ip;
    void **temp_r1;
    void *temp_r3;

    if (arg5 == 0) {
        return;
    }
    if (arg0 != arg2) {
        *arg2 -= arg5;
        *arg0 += arg5;
    }
    temp_ip                          = *arg3;
    temp_r3                          = **arg4;
    M2C_FIELD(*temp_ip, void ***, 4) = (void **) M2C_FIELD(temp_r3, void ***, 4);
    *M2C_FIELD(temp_r3, void ***, 4) = *temp_ip;
    temp_r1                          = *arg1;
    M2C_FIELD(*temp_r1, void ***, 4) = temp_ip;
    *temp_ip                         = *temp_r1;
    *temp_r1                         = temp_r3;
    M2C_FIELD(temp_r3, void ***, 4)  = temp_r1;
}
