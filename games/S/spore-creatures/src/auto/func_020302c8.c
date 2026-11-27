#include "m2c.h"

M2C_UNK func_0209c624(M2C_UNK);                     /* extern */

void func_020302c8(void *arg0) {
    void *temp_r1;

    func_0209c624(1);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) | 0x6000);
    temp_r1                      = M2C_FIELD(arg0, void **, 0x2C);
    if ((s32) M2C_FIELD(temp_r1, s32 *, 0x3C) > 0) {
        M2C_FIELD(temp_r1, s32 *, 0x3C) = 0;
    }
}
