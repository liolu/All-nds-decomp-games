#include "m2c.h"

M2C_UNK func_0201039c();                            /* extern */
void *func_020107c0();                              /* extern */
extern M2C_UNK data_020d63ac;

s32 func_0204d1b8(void) {
    s32 var_r0;
    s32 var_r2;
    s32 var_r3;
    void *var_r0_2;

    func_0201039c();
    var_r0_2 = func_020107c0();
    var_r2   = 0;
    var_r3   = 0;
    do {
        var_r3 += 1;
        if (M2C_FIELD(var_r0_2, s32 *, 0x10) != 0) {
            var_r2 += 1;
        }
        var_r0_2 += 0x40;
    } while (var_r3 < 0x20);
    var_r0 = var_r2 - M2C_FIELD(&data_020d63ac, s32 *, 8);
    if (M2C_FIELD(&data_020d63ac, u8 *, 0) == 1) {
        var_r0 += 1;
    }
    return var_r0;
}
