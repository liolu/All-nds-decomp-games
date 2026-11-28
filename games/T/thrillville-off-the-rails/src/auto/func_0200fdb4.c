/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_02021a1c();                                /* extern */
extern M2C_UNK data_020eba0c;

void func_0200fdb4(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_020eba0c, 0x05000001);
    M2C_FIELD(&data_020eba0c, s16 *, 2) = func_02021a1c();
}
