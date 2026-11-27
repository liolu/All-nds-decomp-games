#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0202c158(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK data_0209f7a8;

s32 func_02046914(M2C_UNK arg0) {
    s32 temp_r5;
    s32 var_r6;

    temp_r5 = func_02012a90(arg0, 1);
    var_r6  = func_02012a90(arg0, 2);
    if (var_r6 > temp_r5) {
    loop_2:
        if (func_0202c158(&data_0209f7a8, var_r6) == 0) {
            var_r6 -= 1;
            if (var_r6 > temp_r5) {
                goto loop_2;
            }
        }
    }
    return var_r6;
}
