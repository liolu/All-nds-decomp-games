#include "m2c.h"

M2C_UNK func_02018cb4(M2C_UNK, s32);                /* extern */
s32 func_020197c4();                                /* extern */
s32 func_020198b0(s32);                             /* extern */
s32 func_020199ac(s32, s32);                        /* extern */

void func_0207db18(void *arg0) {
    func_02018cb4(0x3F000000, func_020199ac(0x3C9374BC, func_020198b0(M2C_FIELD(arg0, s32 *, 0x1054))));
    M2C_FIELD(arg0, s32 *, 0x1054) = (s32) (M2C_FIELD(arg0, s32 *, 0x1054) - func_020197c4());
}
