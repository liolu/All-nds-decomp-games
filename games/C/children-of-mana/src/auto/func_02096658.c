/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020962f0(s32, M2C_UNK);                    /* extern */
s32 func_020963b8();                                /* extern */
M2C_UNK func_02096430(s32, s32);                    /* extern */
extern s32 data_02126ce0;

s32 func_02096658(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r4;

    if ((data_02126ce0 == 0) || (func_020963b8() == 0)) {
        return 0;
    }
    temp_r0 = func_0200f270(0x38, 0);
    var_r4  = temp_r0;
    if (var_r4 != 0) {
        var_r4 = func_020962f0(temp_r0, arg0);
    }
    func_02096430(data_02126ce0, var_r4);
    return var_r4;
}
