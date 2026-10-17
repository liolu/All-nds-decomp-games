/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014034();                            /* extern */

s32 func_02013fc4(void *arg0, void *arg1) {
    s32 var_r3;

    var_r3 = 0;
    if ((M2C_FIELD(arg1, s32 *, 4) == 1) && (M2C_FIELD(arg1, s32 *, 0xC) == M2C_FIELD(arg0, s32 *, 0x1E0))) {
        func_02014034(arg0);
        var_r3 = 1;
    }
    return var_r3;
}
