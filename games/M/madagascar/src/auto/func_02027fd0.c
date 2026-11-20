/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020020ac(void *, s32);                 /* extern */
M2C_UNK func_02003d10(s32, M2C_UNK);                /* extern */
s32 func_02003f58(s32, M2C_UNK, void *, M2C_UNK);   /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */

s32 func_02027fd0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r4;

    temp_r0 = func_0207b068(0x1C);
    var_r4  = temp_r0;
    if (var_r4 != 0) {
        var_r4 = func_02003f58(temp_r0, arg1, arg0, arg2);
    }
    func_02003d10(var_r4, arg3);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
    func_020020ac(arg0 + 0x18, var_r4);
    return temp_r4;
}
