#include "m2c.h"

s32 func_02019cd0(u16);                             /* extern */

s32 func_02019c58(void *arg0) {
    s32 var_r2;

    var_r2 = 0xB229E3A1;
    if ((s32) M2C_FIELD(arg0, s32 *, 4) < 0x2000) {
        var_r2 = func_02019cd0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 2));
    }
    return var_r2;
}
