#include "m2c.h"

M2C_UNK func_02000b9c(s32);                         /* extern */
s32 func_0209eff8(M2C_UNK);                         /* extern */
M2C_UNK func_0209f80c(M2C_UNK);                     /* extern */
s32 func_0209fa94();                                /* extern */

s32 func_0209fae4(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r5;

    var_r5 = 0;
    func_02000b9c(0x02000BC4);
    temp_r4 = func_0209eff8(arg0);
    if (func_0209fa94() != 0) {
        func_0209f80c(arg0);
        var_r5 = 1;
    }
    if (temp_r4 < 0) {
        if (var_r5 != 0) {
            var_r0 = 2;
        } else {
            var_r0 = 3;
        }
        return var_r0;
    }
    if (var_r5 != 0) {
        return 1;
    }
    return 0;
}
