/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02062e04(s32, M2C_UNK);                /* extern */
M2C_UNK func_02062e14(s32, M2C_UNK);                /* extern */
s32 func_02062edc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_0217e2f8;

void func_02001a88(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r0;

    temp_r0       = func_02062edc(arg0, arg1, 0);
    data_0217e2f8 = temp_r0;
    func_02062e14(temp_r0, arg2);
    func_02062e04(data_0217e2f8, arg3);
}
