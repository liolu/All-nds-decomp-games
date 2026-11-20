/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ca33c(void *, s32);                     /* extern */
M2C_UNK func_020ca4b8(void *, s32);                 /* extern */
M2C_UNK func_020cb584();                            /* extern */
s32 func_020cb628(s32);                             /* extern */

s32 func_020cb53c(void *arg0) {
    func_020ca4b8(arg0, func_020ca33c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020cb628(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020cb584();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
