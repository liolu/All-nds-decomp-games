#include "m2c.h"

void func_0209702c(void **arg0, void *arg1) {
    void *temp_r1;
    void *temp_r1_2;

    if (M2C_FIELD(arg1, u8 *, 0x18) != 0) {
        temp_r1 = M2C_FIELD(arg1, void **, 0x10);
        *arg0   = temp_r1;
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) + 1);
        }
        return;
    }
    temp_r1_2 = M2C_FIELD(arg1, void **, 0xC);
    *arg0     = temp_r1_2;
    if (temp_r1_2 != NULL) {
        M2C_FIELD(temp_r1_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r1_2, s32 *, 4) + 1);
    }
}
