/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203e45c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02095e78(s32);                             /* extern */
M2C_UNK func_020e723c(void *);                      /* extern */

void func_020e70bc(void *arg0, s8 arg1) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    temp_r4 = func_02095e78(0);
    func_0203e45c(0, 0, 0);
    func_0203e45c(1, 0, 0);
    func_0203e45c(2, 0, 0);
    func_0203e45c(3, 0, 0);
    func_0203e45c(4, 0, 0);
    func_0203e45c(5, 0, 0);
    func_0203e45c(6, 0, 0);
    func_0203e45c(7, 0, 0);
    func_02095e78(temp_r4);
    func_020e723c(arg0);
    M2C_FIELD(arg0, s32 *, 4)   = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = arg1;
}
