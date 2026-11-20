#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
s32 func_0205369c(M2C_UNK);                         /* extern */
M2C_UNK func_020ae4d4();                            /* extern */
M2C_UNK func_020ae518(s32, M2C_UNK);                /* extern */
M2C_UNK func_020ae588(s32, s32);                    /* extern */
s32 func_ov000_02163a20();                          /* extern */
M2C_UNK func_ov000_02163a54(s32, M2C_UNK);          /* extern */

void func_0206e790(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 var_r0;

    var_r0 = func_020348ec(0x62C);
    if (var_r0 != 0) {
        var_r0 = func_ov000_02163a20();
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0;
    func_ov000_02163a54(var_r0, arg1);
    temp_r4 = func_0205369c(arg1);
    func_020ae4d4();
    func_020ae518(temp_r4, 1);
    func_020ae588(temp_r4, 0x8007);
}
