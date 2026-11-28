#include "m2c.h"

void func_020b06b0(void *arg0, u8 arg1) {
    void *temp_r1;

    M2C_FIELD(arg0, u8 *, 0x3B0) = arg1;
    M2C_FIELD(arg0, u8 *, 0x3B1) = (u8) (M2C_FIELD(arg0, u8 *, 0x3B1) | 0x20);
    temp_r1                      = M2C_FIELD(arg0, void **, 0x380);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x74) = (s32) M2C_FIELD(arg0, u8 *, 0x3B0);
    }
}
