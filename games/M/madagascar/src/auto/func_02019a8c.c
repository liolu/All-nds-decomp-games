/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02019400();                            /* extern */

s32 func_02019a8c(void *arg0, void *arg1) {
    s32 var_lr;
    s32 var_r2;
    s32 var_r3;

    var_lr = 0;
    if (M2C_FIELD(arg0, s32 *, 0x58) == 1) {
        var_r3 = M2C_FIELD(arg1, s32 *, 0) + M2C_FIELD(arg0, s32 *, 0x9C);
        var_r2 = M2C_FIELD(arg1, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0xA4);
        if (var_r3 < 0) {
            var_r3 = 0 - var_r3;
        }
        if (var_r3 < 0xA66) {
            if (var_r2 < 0) {
                var_r2 = 0 - var_r2;
            }
            if (var_r2 < 0xA66) {
                func_02019400(arg0);
                var_lr = 1;
            }
        }
    }
    return var_lr;
}
