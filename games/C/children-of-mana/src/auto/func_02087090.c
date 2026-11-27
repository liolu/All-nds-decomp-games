/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020b0594(s32, s32);                    /* extern */
extern M2C_UNK data_021005bc;
extern M2C_UNK data_0210196c;

void func_02087090(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_0210196c, &data_021005bc, temp_r0);
    func_020b0594(M2C_FIELD(arg0, s32 *, 0x300), temp_r0);
}
