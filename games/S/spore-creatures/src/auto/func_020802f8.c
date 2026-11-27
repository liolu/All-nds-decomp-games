#include "m2c.h"

void *func_01ff8064();                              /* extern */
extern M2C_UNK data_020dfc28;

void *func_020802f8(void *arg0) {
    void *temp_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfc28;
    if (M2C_FIELD(func_01ff8064(), s32 *, 0x23C) != 0) {
        temp_r1                         = M2C_FIELD(func_01ff8064(), void **, 0x23C);
        M2C_FIELD(temp_r1, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
        M2C_FIELD(temp_r1, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
        M2C_FIELD(temp_r1, s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    }
    return arg0;
}
