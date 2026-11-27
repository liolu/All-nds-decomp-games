/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020105e0(void *, s32);                 /* extern */
M2C_UNK func_02010b2c(void *, s32);                 /* extern */
s32 func_0201d090(s32);                             /* extern */

void func_0201f580(s32 arg0, void *arg1) {
    func_02010b2c(arg1, arg0 + 0x150);
    func_020105e0(arg1, func_0201d090(arg0));
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg1, s32 *, 8) = 0;
}
