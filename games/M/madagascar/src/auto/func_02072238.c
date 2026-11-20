/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02063cf8();                                /* extern */
M2C_UNK func_02063d0c(s32);                         /* extern */
M2C_UNK func_0207228c(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0207244c();                                /* extern */
extern s32 data_020ded80;

void func_02072238(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02063cf8();
    if (func_0207244c() != 0) {
        func_0207228c(data_020ded80 + 0x98, 0, arg0, 0);
    }
    func_02063d0c(temp_r4);
}
