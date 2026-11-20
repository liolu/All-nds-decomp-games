#include "m2c.h"

extern M2C_UNK data_02152824;

void func_020445e8(void) {
    M2C_FIELD((void *) 0x04000040, s16 *, 0) = (s16) (((M2C_FIELD(&data_02152824, u8 *, 0xFA) << 8) & 0xFF00) | 0xF8);
    M2C_FIELD((void *) 0x04000040, s16 *, 4) = 0x858;
    M2C_FIELD((void *) 0x04000040, s16 *, 2) = (s16) ((u8) (0 - M2C_FIELD(&data_02152824, u8 *, 0xFA)) | 0x800);
    M2C_FIELD((void *) 0x04000040, s16 *, 6) = 0x68B8;
}
