#include "m2c.h"

s32 func_020a3be8();                                /* extern */
s32 func_020a25a0(s32);                             /* extern */
M2C_UNK func_020a25d4(s32);                         /* extern */
M2C_UNK func_020a28dc();                            /* extern */
s32 func_020a29bc();                                /* extern */
M2C_UNK func_020affc4(M2C_UNK);                     /* extern */
extern s32 data_021d444c;

s32 func_020a2a64(void) {
    s32 var_r4;

    if (data_021d444c != 0) {
        var_r4 = func_020a29bc();
        if (var_r4 == 0) {
            func_020a25d4(data_021d444c);
            if (func_020a25a0(data_021d444c) != 0) {
                data_021d444c = 0;
            }
            var_r4 = -0x1A;
        }
        func_020a28dc();
    } else if (func_020a3be8() == 0) {
        var_r4 = -0x1A;
    } else {
        func_020affc4(0);
        var_r4 = 0;
    }
    return var_r4;
}
