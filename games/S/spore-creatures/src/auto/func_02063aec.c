#include "m2c.h"

M2C_UNK func_02063f5c(s32);                         /* extern */
M2C_UNK func_020b755c(M2C_UNK, s32, M2C_UNK);       /* extern */

s32 func_02063aec(s32 arg0) {
    func_020b755c(0, arg0 + 0x40, 0x300);
    func_02063f5c(arg0);
    return arg0;
}
