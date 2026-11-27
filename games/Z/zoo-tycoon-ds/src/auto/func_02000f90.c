/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020ce12c;

void func_02000f90(void) {
    u32 temp_lr;

    temp_lr                               = M2C_FIELD(&data_020ce12c, u32 *, 0xC) + 1;
    M2C_FIELD(&data_020ce12c, u32 *, 0xC) = temp_lr;
    M2C_FIELD(&data_020ce12c, s16 *, 4)   = (s16) ((temp_lr >> 1) & 1);
    M2C_FIELD(&data_020ce12c, s16 *, 6)   = (s16) ((temp_lr >> 2) & 1);
    M2C_FIELD(&data_020ce12c, s16 *, 8)   = (s16) ((temp_lr >> 3) & 1);
    M2C_FIELD(&data_020ce12c, s16 *, 0xA) = (s16) ((temp_lr >> 4) & 1);
}
