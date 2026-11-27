/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02062e8c(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0206a468(s32, M2C_UNK);                /* extern */
extern s32 data_0217e2f8;

s32 func_02001a14(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02062e8c(data_0217e2f8, arg0, arg1);
    func_0206a468(temp_r0, arg0);
    return temp_r0;
}
