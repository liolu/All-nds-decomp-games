#include "m2c.h"

extern M2C_UNK data_020de83c;

void func_0202b0fc(void *arg0, void *arg1, s8 arg2) {
    s32 *temp_r3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de83c;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg1, s32 *, 0);
    temp_r3                        = M2C_FIELD(arg1, s32 **, 4);
    M2C_FIELD(arg0, s32 **, 8)     = temp_r3;
    if (temp_r3 != NULL) {
        *temp_r3 += 1;
    }
    M2C_FIELD(arg0, s8 *, 0xC) = arg2;
}
