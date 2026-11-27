#include "m2c.h"

M2C_UNK func_0201562c();                            /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
s32 func_020965bc(s32, M2C_UNK);                    /* extern */
extern M2C_UNK data_020de278;

void *func_02015fa0(void *arg0, M2C_UNK arg1) {
    s32 var_r0;

    func_0201562c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de278;
    var_r0                         = func_02093480(0x70);
    if (var_r0 != 0) {
        var_r0 = func_020965bc(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = var_r0;
    return arg0;
}
