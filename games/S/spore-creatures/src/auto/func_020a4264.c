#include "m2c.h"

s32 func_02093480(M2C_UNK);                         /* extern */
s32 func_020a36c8(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020a37c0();                            /* extern */
s32 func_020a42b0();                                /* extern */
M2C_UNK func_020a42e0(s32, M2C_UNK);                /* extern */

s32 func_020a4264(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = func_020a42b0();
    if (var_r4 != 0) {
        func_020a37c0();
    } else {
        temp_r0 = func_02093480(0x30);
        var_r4  = temp_r0;
        if (var_r4 != 0) {
            var_r4 = func_020a36c8(temp_r0, 0);
        }
        func_020a42e0(var_r4 + 4, arg0);
    }
    return var_r4;
}
