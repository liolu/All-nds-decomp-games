/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020c5d7c();                                /* extern */
extern M2C_UNK data_020f9d60;

void func_020d275c(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_020f9d60, 0x05000001);
    M2C_FIELD(&data_020f9d60, s16 *, 2) = func_020c5d7c();
}
