/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32, s32); /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020ae0ac(s32, s32, s32);               /* extern */
extern M2C_UNK data_021007c8;
extern M2C_UNK data_02101994;

void func_02087160(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_02101994, &data_021007c8, temp_r5, temp_r0);
    func_020ae0ac(M2C_FIELD(arg0, s32 *, 0x300), temp_r5, temp_r0);
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0x15;
}
