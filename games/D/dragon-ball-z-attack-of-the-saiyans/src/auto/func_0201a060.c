#include "m2c.h"

M2C_UNK func_0204e9c8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0204ec6c(void *);                      /* extern */
s32 func_0204ee50(s32, void *, M2C_UNK);            /* extern */

s32 func_0201a060(s32 arg0) {
    s32 var_r5;
    void *var_r6;

    func_0204e9c8(0x02360000, 0x02360050);
    var_r6 = (void *) 0x02360000;
    var_r5 = 0;
loop_1:
    if (arg0 == M2C_FIELD(var_r6, u8 *, 0x10)) {
        func_0204ec6c(var_r6 + 4);
        if (func_0204ee50(M2C_FIELD(var_r6, s32 *, 0), var_r6 + 4, 0x10) != 0) {
            return -2;
        }
    }
    var_r5 += 1;
    var_r6 += 0x14;
    if (var_r5 >= 4) {
        return 0;
    }
    goto loop_1;
}
