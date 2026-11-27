/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203e45c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020dc024(void *);                      /* extern */

void func_020dbef0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    func_0203e45c(0, 0, 0);
    func_0203e45c(1, 0, 0);
    func_0203e45c(2, 0, 0);
    func_0203e45c(3, 0, 0);
    func_020dc024(arg0);
    M2C_FIELD(arg0, s32 *, 4)   = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
