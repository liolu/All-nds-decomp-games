#include "m2c.h"

M2C_UNK func_020d6864(void *, s32);                 /* extern */
s32 func_020d68c0(void *, s32);                     /* extern */
s32 func_020d749c(s32);                             /* extern */
M2C_UNK func_020d76b0();                            /* extern */

s32 func_020d7744(void *arg0) {
    func_020d6864(arg0, func_020d68c0(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020d749c(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020d76b0();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
