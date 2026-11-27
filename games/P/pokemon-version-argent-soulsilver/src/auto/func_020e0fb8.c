#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020d15c4();                                /* extern */
extern M2C_UNK data_021e4d60;
extern M2C_UNK data_021e4d64;

void func_020e0fb8(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_021e4d64, 0x05000001);
    M2C_FIELD(&data_021e4d60, s16 *, 6) = func_020d15c4();
}
