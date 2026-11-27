#include "m2c.h"

M2C_UNK func_020ac26c(M2C_UNK, s32, M2C_UNK);       /* extern */

s32 func_02042b3c(void *arg0, M2C_UNK arg1) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = M2C_FIELD(arg0, volatile s32 *, 0);
    var_r5 = 0;
    if (var_r6 != ((M2C_FIELD(arg0, volatile s32 *, 4) * 0x28) + var_r6)) {
        do {
            func_020ac26c(arg1, var_r6 + 0x1C, 0x60);
            var_r6 += 0x28;
            var_r5 += 1;
        } while (var_r6 != ((M2C_FIELD(arg0, volatile s32 *, 4) * 0x28) + M2C_FIELD(arg0, volatile s32 *, 0)));
    }
    return var_r5;
}
