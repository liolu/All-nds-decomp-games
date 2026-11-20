#include "m2c.h"

M2C_UNK func_02066b00(void *, s32);                 /* extern */
s32 func_02066b5c(void *, s32);                     /* extern */
s32 func_02067720(s32);                             /* extern */
M2C_UNK func_02067934();                            /* extern */

s32 func_020679c8(void *arg0) {
    func_02066b00(arg0, func_02066b5c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02067720(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02067934();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
