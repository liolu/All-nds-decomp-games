#include "m2c.h"

s32 func_0201259c(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020128ec(void *);                      /* extern */
M2C_UNK func_020924b0();                            /* extern */
extern M2C_UNK data_020e1640;

void *func_0205b994(void *arg0, M2C_UNK arg1, s8 arg2) {
    s8 var_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e1640;
    M2C_FIELD(arg0, s8 *, 4)       = 0;
    M2C_FIELD(arg0, s32 *, 0x50)   = 0;
    M2C_FIELD(arg0, s8 *, 0x54)    = arg2;
    func_020924b0();
    func_020128ec(arg0 + 8);
    if (func_0201259c(arg0 + 8, arg1) > 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s8 *, 4) = var_r1;
    return arg0;
}
