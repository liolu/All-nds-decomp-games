#include "m2c.h"

M2C_UNK func_020211c8(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 data_020e2078;
extern s32 data_020e207c;
extern s32 data_020e2080;

void func_02076f3c(void *arg0, s32 arg1) {
    func_020211c8(0, arg0, 0x54);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) data_020e2080;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) data_020e207c;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) data_020e2078;
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
}
