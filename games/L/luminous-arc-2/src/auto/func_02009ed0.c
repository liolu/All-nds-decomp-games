#include "m2c.h"

M2C_UNK func_02008ff0(void *, s32);                 /* extern */
s32 func_0200904c(void *, s32);                     /* extern */
s32 func_02009c28(s32);                             /* extern */
M2C_UNK func_02009e3c();                            /* extern */

s32 func_02009ed0(void *arg0) {
    func_02008ff0(arg0, func_0200904c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02009c28(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02009e3c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
