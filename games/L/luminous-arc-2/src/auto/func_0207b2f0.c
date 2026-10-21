#include "m2c.h"

M2C_UNK func_0200673c();                            /* extern */
M2C_UNK func_02006b2c();                            /* extern */
extern s8 data_02151424;
extern s8 data_02151426;

void func_0207b2f0(void *arg0) {
    data_02151424 = 0;
    data_02151426 = 0;
    func_02006b2c();
    func_0200673c();
    M2C_FIELD(arg0, s32 *, 4)    = (s32) (M2C_FIELD(arg0, s32 *, 4) | 8);
    M2C_FIELD(arg0, u8 *, 0x77C) = (u8) (M2C_FIELD(arg0, u8 *, 0x77C) + 1);
}
