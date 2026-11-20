#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_02017acc();                                /* extern */
extern M2C_UNK data_02093634;
extern M2C_UNK data_02093638;

void func_02009018(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_02093638, 0x05000001);
    M2C_FIELD(&data_02093634, s16 *, 6) = func_02017acc();
}
