#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_02036a20();                                /* extern */
extern M2C_UNK data_021604a8;
extern M2C_UNK data_021604ac;

void func_02041bec(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_021604ac, 0x05000001);
    M2C_FIELD(&data_021604a8, s16 *, 6) = func_02036a20();
}
