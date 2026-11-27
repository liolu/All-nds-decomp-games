/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02014118(s32, M2C_UNK);                /* extern */
s32 func_0208f93c(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0208fa8c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0208fbc8(s32, M2C_UNK);                /* extern */
s32 func_0208fc6c();                                /* extern */

void func_020c8ab4(void *arg0) {
    s32 var_r0;

    var_r0 = func_0200f270(0xC, 0);
    if (var_r0 != 0) {
        var_r0 = func_0208fc6c();
    }
    M2C_FIELD(arg0, s32 *, 0x1C8) = var_r0;
    func_0208fbc8(M2C_FIELD(arg0, s32 *, 0x1C8), 2);
    func_0208fa8c(M2C_FIELD(arg0, s32 *, 0x1C8), 1);
    func_02014118(func_0208f93c(M2C_FIELD(arg0, s32 *, 0x1C8), 0), 0);
    func_02014118(func_0208f93c(M2C_FIELD(arg0, s32 *, 0x1C8), 1), 0);
}
