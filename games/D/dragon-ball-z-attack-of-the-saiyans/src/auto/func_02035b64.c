#include "m2c.h"

M2C_UNK func_0200bd84();                            /* extern */
M2C_UNK func_0200c3f0();                            /* extern */
s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02035324(s32);                         /* extern */
s32 func_02035564(s32, s32);                        /* extern */
extern s32 data_020d1d24;

s32 func_02035b64(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r5;

    temp_r4 = (func_02012a90(arg0, 1) * 0xEC) + (data_020d1d24 + 0x634);
    if (M2C_FIELD(temp_r4, s32 *, 0x7C) != 0) {
        func_0200c3f0();
    }
    var_r5 = 0;
loop_3:
    var_r5 = func_02035564(var_r5, temp_r4);
    if (var_r5 != 0) {
        func_0200bd84();
        goto loop_3;
    }
    func_02035324(temp_r4);
    return 1;
}
