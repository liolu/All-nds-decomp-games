#include "m2c.h"

extern M2C_UNK data_02152824;

void func_02043d98(void) {
    M2C_FIELD((void *) 0x04000040, s16 *, 0)   = 0xF8;
    M2C_FIELD((void *) 0x04000040, s16 *, 4)   = 0x858;
    M2C_FIELD((void *) 0x04000040, s16 *, 2)   = 0x800;
    M2C_FIELD((void *) 0x04000040, s16 *, 6)   = 0x68B8;
    M2C_FIELD((void *) 0x04000040, u16 *, 8)   = (u16) ((M2C_FIELD((void *) 0x04000040, u16 *, 8) & ~0x3F) | 0x29);
    M2C_FIELD((void *) 0x04000040, u16 *, 8)   = (u16) ((M2C_FIELD((void *) 0x04000040, u16 *, 8) & ~0x3F00) | 0x2900);
    M2C_FIELD((void *) 0x04000040, u16 *, 0xA) = (u16) ((M2C_FIELD((void *) 0x04000040, u16 *, 0xA) & ~0x3F) | 0x3F);
    *(s32 *) 0x04000000                        = (*(s32 *) 0x04000000 & ~0xE000) | 0x6000;
    M2C_FIELD(&data_02152824, s8 *, 0xFA)      = 0;
    M2C_FIELD(&data_02152824, u8 *, 0xF9)      = (u8) (M2C_FIELD(&data_02152824, u8 *, 0xF9) + 1);
}
