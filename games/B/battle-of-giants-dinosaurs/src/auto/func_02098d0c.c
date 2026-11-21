#include "m2c.h"

s32 func_020959a4(s32);                             /* extern */
s8 *func_02098d78(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02098d88(void *, s32);                 /* extern */
M2C_UNK func_020a4ee0(s32);                         /* extern */
extern M2C_UNK data_020bef14;

void func_02098d0c(void *arg0) {
    s8 var_r2;

    func_020a4ee0(arg0 + 0x14);
    if (func_020959a4(arg0 + 0x14) != 0) {
        if (*func_02098d78(arg0 + 0x14, 0) == 0x2E) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
        M2C_FIELD(arg0, s8 *, 0x10) = var_r2;
        func_02098d88(arg0, arg0 + 0x14);
    } else {
        M2C_FIELD(arg0, s8 *, 0x10) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(&data_020bef14, s32 *, 0x14);
}
