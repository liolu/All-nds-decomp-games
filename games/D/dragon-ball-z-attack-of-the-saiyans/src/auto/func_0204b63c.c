#include "m2c.h"

void *func_020107c0();                              /* extern */
extern M2C_UNK data_020cc620;

s32 func_0204b63c(s32 arg0, s32 *arg1) {
    s32 var_r2;
    s32 var_r3;
    void *var_r0;

    var_r0 = func_020107c0();
    var_r2 = 0;
    var_r3 = 0;
    do {
        var_r3 += 1;
        if (M2C_FIELD(var_r0, s32 *, 0x10) != 0) {
            var_r2 += 1;
        }
        var_r0 += 0x40;
    } while (var_r3 < 0x20);
    if (M2C_FIELD(&data_020cc620, s32 *, 0xA8) == var_r2) {
        *arg1 = 1;
    }
    return 1;
}
