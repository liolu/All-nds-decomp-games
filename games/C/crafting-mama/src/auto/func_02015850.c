#include "m2c.h"

M2C_UNK func_02015d20(M2C_UNK, s32);                /* extern */
s32 func_020235e4(s32);                             /* extern */
extern M2C_UNK data_02093fd0;

s32 func_02015850(void) {
    s32 var_r4;

    var_r4 = func_020235e4(M2C_FIELD(M2C_FIELD(&data_02093fd0, void **, 0xC), s32 *, 0x508));
    func_02015d20(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}
