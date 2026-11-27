#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_02083d58();                                /* extern */
extern M2C_UNK data_020daee8;
extern M2C_UNK data_020daeec;

void func_0208a158(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_020daeec, 0x05000001);
    M2C_FIELD(&data_020daee8, s16 *, 6) = func_02083d58();
}
