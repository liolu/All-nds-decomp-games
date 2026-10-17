/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020456e4();                                /* extern */

s32 func_02031850(void *arg0, void *arg1) {
    s32 var_r3;

    var_r3 = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 0x34) != 0) {
        if (M2C_FIELD(arg1, s32 *, 8) == 2) {
            var_r3 = func_020456e4(arg0, arg1);
        }
    } else if (M2C_FIELD(arg1, s32 *, 8) == 1) {
        var_r3 = func_020456e4(arg0, arg1);
    }
    return var_r3;
}
