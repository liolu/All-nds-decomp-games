#include "m2c.h"

M2C_UNK func_020b9068(void *, s32);                 /* extern */
s32 func_020b90c4(void *, s32);                     /* extern */
s32 func_020b9ca0(s32);                             /* extern */
M2C_UNK func_020b9eb4();                            /* extern */

s32 func_020b9f48(void *arg0) {
    func_020b9068(arg0, func_020b90c4(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020b9ca0(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020b9eb4();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
