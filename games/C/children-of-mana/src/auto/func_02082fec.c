/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32);              /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
M2C_UNK func_ov013_02140c2c(s32, s32, s32);         /* extern */
extern M2C_UNK data_02100fa8;

void func_02082fec(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_02100fa8, temp_r0);
    func_ov013_02140c2c(M2C_FIELD(arg0, s32 *, 0x318), temp_r0, temp_r5);
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0x12;
}
