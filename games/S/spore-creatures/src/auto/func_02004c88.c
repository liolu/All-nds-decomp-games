/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02004c88(void **arg0, void *arg1, void **arg2) {
    void **temp_r2;
    void **temp_r2_2;
    void *temp_ip;
    void *temp_r3;

    temp_r3 = *arg2;
    temp_ip = M2C_FIELD(temp_r3, void **, 0);
    temp_r2 = M2C_FIELD(temp_r3, void ***, 4);
    if (temp_ip != NULL) {
        M2C_FIELD(temp_ip, void ***, 4) = temp_r2;
    } else {
        M2C_FIELD(arg1, void ***, 4) = temp_r2;
    }
    temp_r2_2 = M2C_FIELD(temp_r3, void ***, 4);
    if (temp_r2_2 != NULL) {
        *temp_r2_2 = temp_ip;
    } else {
        M2C_FIELD(arg1, void **, 0) = temp_ip;
    }
    M2C_FIELD(temp_r3, void **, 0) = (void *) M2C_FIELD(arg1, void **, 8);
    M2C_FIELD(arg1, void **, 8)    = temp_r3;
    M2C_FIELD(arg1, s32 *, 0x1C)   = (s32) (M2C_FIELD(arg1, s32 *, 0x1C) - 1);
    *arg0                          = temp_ip;
}
