/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020482b8();                                 /* extern */
extern M2C_UNK data_0206efd4;

void func_02058ea8(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_0206efd4, 0x05000001);
    M2C_FIELD(&data_0206efd4, s16 *, 2) = func_020482b8();
}
