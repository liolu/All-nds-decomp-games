/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s16 func_0201852c(s32, s32, M2C_UNK);              /* extern */
s32 func_020921c0(s32, s32, M2C_UNK, s32);                 /* extern */
s32 func_0209220c();                                 /* extern */
M2C_UNK func_02092144(s32, M2C_UNK, s32);              /* extern */
extern M2C_UNK data_02170c80;

s32 func_02091a70(s32 arg0) {
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;

    var_r6 = M2C_FIELD(&data_02170c80, s32 *, 8);
    var_r7 = arg0;
    var_r5 = 0;
    do {
        M2C_FIELD((arg0 + (var_r5 << 8)), s16 *, 0xFE) = func_0201852c(arg0 + 0x500, var_r7, 0xFE);
    loop_2:
        func_02092144(var_r6, 0x100, var_r7);
        if (func_020921c0(var_r7, var_r6, 0x100, arg0 + 0x400) == 0) {
            goto loop_2;
        }
        var_r5 += 1;
        var_r7 += 0x100;
        var_r6 += 0x100;
    } while (var_r5 < 4);
    if (func_0209220c() != 0) {
        return 1;
    }
    return 0;
}
