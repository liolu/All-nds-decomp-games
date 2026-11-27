#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02055ab4(s32);                             /* extern */
s32 func_02055d00(s32, s32, s32, s32);              /* extern */
M2C_UNK func_02055f54(s32, s32, s32, M2C_UNK, s32); /* extern */

s32 func_0204a108(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r9;
    s32 var_r9_2;

    temp_r6 = func_02012a90(arg0, 1);
    temp_r4 = func_02012a90(arg0, 2);
    temp_r5 = func_02012a90(arg0, 3);
    if (temp_r6 == 0xF0) {
        var_r9 = 0;
        do {
            if ((func_02055ab4(var_r9 + 0x80) != 0xD) && (func_02055ab4(var_r9 + 0x80) != 0) &&
                (func_02055d00(var_r9 + 0x80, temp_r4, temp_r5, 0) != 0)) {
                func_02055f54(var_r9 + 0x80, temp_r4, 0, 0xFF, 0);
            }
            var_r9 += 1;
        } while (var_r9 < 3);
    } else if (temp_r6 == 0xF1) {
        var_r9_2 = 0;
        do {
            if ((func_02055ab4(var_r9_2) != 0xD) && (func_02055ab4(var_r9_2) != 0) &&
                (func_02055d00(var_r9_2, temp_r4, temp_r5, 0) != 0)) {
                func_02055f54(var_r9_2, temp_r4, 0, 0xFF, 0);
            }
            var_r9_2 += 1;
        } while (var_r9_2 < 6);
    } else if (func_02055d00(temp_r6, temp_r4, temp_r5, 0) != 0) {
        func_02055f54(temp_r6, temp_r4, 0, 0xFF, 0);
    }
    return 1;
}
