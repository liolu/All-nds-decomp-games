/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ce4c8(s32);                         /* extern */

void func_020a5494(void *arg0, s32 arg1) {
    s8 var_r0;

    func_020ce4c8(M2C_FIELD(arg0, s32 *, 0x19C));
    if (M2C_FIELD(arg0, s32 *, 0x1A0) != arg1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x1A8)  = var_r0;
    M2C_FIELD(arg0, s32 *, 0x1A0) = arg1;
}
