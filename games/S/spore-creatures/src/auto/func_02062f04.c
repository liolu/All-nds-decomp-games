#include "m2c.h"

M2C_UNK func_020630a0(void *, M2C_UNK);             /* extern */
s32 func_ov001_02100f38(u8, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_ov001_02101248(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK func_02062860;
extern M2C_UNK func_02062958;

s32 func_02062f04(void *arg0) {
    s32 var_r4;

    if (func_ov001_02100f38((u8) M2C_FIELD(arg0, s32 *, 0xE24), 0, &func_02062860, 0, &func_02062958, 0) != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_ov001_02101248(0, 0);
    if (var_r4 != 0) {
        func_020630a0(arg0, 8);
    }
    return var_r4;
}
