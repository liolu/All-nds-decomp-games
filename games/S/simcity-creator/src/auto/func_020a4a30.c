#include "m2c.h"

s16 func_020a4a30(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 8);
    return (s16) ((s16) (((arg1 - M2C_FIELD(temp_r3, u16 *, 0xA)) - (arg2 - M2C_FIELD(temp_r3, u16 *, 0xC)))
                         << ((u8) M2C_FIELD(temp_r3, s32 *, 0x5510C) + 3)) +
                  0x80);
}
