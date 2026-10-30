#include "m2c.h"

extern M2C_UNK data_020dd798;

s16 func_0205938c(void *arg0, u16 *arg1, u16 *arg2) {
    void *temp_r4;

    M2C_FIELD(&data_020dd798, s16 *, 0) = (s16) M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x5510C);
    temp_r4                             = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(&data_020dd798, s16 *, 2) =
        (s16) (((*arg1 - M2C_FIELD(temp_r4, u16 *, 0xA)) + (*arg2 - M2C_FIELD(temp_r4, u16 *, 0xC)))
               << (M2C_FIELD(&data_020dd798, s16 *, 0) + 2));
    return (s16) (M2C_FIELD(&data_020dd798, s16 *, 2) + 0x5F);
}
