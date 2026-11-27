/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, s32);         /* extern */
s32 func_020758fc(s32);                             /* extern */
extern M2C_UNK data_020fac08;
extern s32 data_021152e4;

s32 func_02011274(void) {
    s32 temp_r0;

    temp_r0 = func_020758fc(data_021152e4);
    func_0200e8c8(&data_020fac08, temp_r0 - 1, temp_r0);
    return temp_r0;
}
