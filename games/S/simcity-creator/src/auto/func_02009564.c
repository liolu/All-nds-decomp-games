#include "m2c.h"

M2C_UNK func_0200869c(void *, s32);                 /* extern */
s32 func_020086f8(void *, s32);                     /* extern */
s32 func_020092bc(s32);                             /* extern */
M2C_UNK func_020094d0();                            /* extern */

s32 func_02009564(void *arg0) {
    func_0200869c(arg0, func_020086f8(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020092bc(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020094d0();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
