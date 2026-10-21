#include "m2c.h"

extern s8 data_02151424;
extern s8 data_02151425;
extern s8 data_02151430;
extern M2C_UNK *data_0215150c;
extern M2C_UNK func_020246a4;

void func_0207a44c(void *arg0) {
    data_02151425 = 0;
    data_02151424 = 0;
    data_02151430 = 0;
    *(u16 *) 0x04000204 &= ~0x8000;
    M2C_FIELD(arg0, s32 *, 4)    = (s32) (M2C_FIELD(arg0, s32 *, 4) | 8);
    data_0215150c                = &func_020246a4;
    M2C_FIELD(arg0, u8 *, 0x779) = (u8) (M2C_FIELD(arg0, u8 *, 0x779) + 1);
}
