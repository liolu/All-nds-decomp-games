#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020048c8();                                /* extern */
extern M2C_UNK data_021508d8;
extern M2C_UNK data_021508dc;

void func_02017b48(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_021508dc, 0x05000001);
    M2C_FIELD(&data_021508d8, s16 *, 6) = func_020048c8();
}
