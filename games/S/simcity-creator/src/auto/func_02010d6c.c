#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_0200466c();                                /* extern */
extern M2C_UNK data_020d4180;
extern M2C_UNK data_020d4184;

void func_02010d6c(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_020d4184, 0x05000001);
    M2C_FIELD(&data_020d4180, s16 *, 6) = func_0200466c();
}
