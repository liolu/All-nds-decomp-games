#include "m2c.h"

extern M2C_UNK data_021172c4;
extern M2C_UNK data_021172e8;

void func_0203cf60(void) {
    if (M2C_FIELD(&data_021172c4, u8 *, 0) != 0) {
        *(s32 *) 0x04000000                = (*(s32 *) 0x04000000 & ~0x1F00) | (M2C_FIELD(&data_021172e8, s32 *, 0) << 8);
        M2C_FIELD(&data_021172c4, u8 *, 0) = 0U;
    }
    if (M2C_FIELD(&data_021172c4, u8 *, 1) == 0) {
        return;
    }
    *(s32 *) 0x04001000                = (*(s32 *) 0x04001000 & ~0x1F00) | (M2C_FIELD(&data_021172e8, s32 *, 4) << 8);
    M2C_FIELD(&data_021172c4, u8 *, 1) = 0U;
}
