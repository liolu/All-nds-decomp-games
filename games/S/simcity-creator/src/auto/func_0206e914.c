#include "m2c.h"

s32 func_020348ec(s32);                             /* extern */
s32 func_0205369c(s32);                             /* extern */
s32 func_0206fff0();                                /* extern */
M2C_UNK func_02092f84(s32, M2C_UNK);                /* extern */
s32 func_02095208(M2C_UNK);                         /* extern */
M2C_UNK func_02095218(M2C_UNK);                     /* extern */
M2C_UNK func_020ae4d4(s32);                         /* extern */
M2C_UNK func_020ae518(s32, M2C_UNK);                /* extern */
M2C_UNK func_020ae588(s32, s32);                    /* extern */
s32 func_ov000_02163a20();                          /* extern */
M2C_UNK func_ov000_02163a54(s32, s32);              /* extern */

void func_0206e914(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 var_r0;

    var_r0 = func_020348ec(0x62C);
    if (var_r0 != 0) {
        var_r0 = func_ov000_02163a20();
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0;
    func_02095218(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_0206fff0();
    func_ov000_02163a54(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    temp_r4                     = func_0205369c(M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    func_02092f84(func_02095208(arg1), 0);
    func_020ae4d4(temp_r4);
    func_020ae518(temp_r4, 1);
    func_020ae588(temp_r4, 0x8007);
}
