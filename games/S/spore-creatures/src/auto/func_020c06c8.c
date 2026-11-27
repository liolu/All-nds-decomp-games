#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020b49f0();                                 /* extern */
extern M2C_UNK data_020f4348;
extern M2C_UNK data_020f434c;

void func_020c06c8(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_020f434c, 0x05000001);
    M2C_FIELD(&data_020f4348, s16 *, 6) = func_020b49f0();
}
