#include "m2c.h"

s32 func_020702a8(s32);                             /* extern */
M2C_UNK func_020706cc();                            /* extern */
extern M2C_UNK data_0216fdb8;

void func_0206ff8c(void) {
    void *var_r4;

    var_r4 = M2C_FIELD(&data_0216fdb8, void **, 0x130);
    if (var_r4 == NULL) {
        return;
    }
    do {
        if (M2C_FIELD(var_r4, s32 *, 0) != 0) {
            func_020706cc();
            do {

            } while (func_020702a8(M2C_FIELD(var_r4, s32 *, 0)) >= 0);
        }
        var_r4 = M2C_FIELD(var_r4, void **, 0x47C);
    } while (var_r4 != NULL);
}
