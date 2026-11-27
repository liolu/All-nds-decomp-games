/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_02075804(s32);                             /* extern */
M2C_UNK func_02075810(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020fabe4;
extern s32 data_021152e4;

void func_02011224(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02075804(data_021152e4);
    func_02075810(data_021152e4, arg0);
    func_0200e8c8(&data_020fabe4, temp_r4, arg0);
}
