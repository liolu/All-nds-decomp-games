/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020cf83c;

s32 func_0204409c(void *arg0) {
    s32 temp_ip;
    s32 var_lr;

    temp_ip = M2C_FIELD(arg0, s32 *, 0x2E8);
    var_lr  = 0;
    if ((temp_ip > 0) && ((s32) (data_020cf83c - M2C_FIELD(arg0, s32 *, 0x2EC)) > temp_ip)) {
        M2C_FIELD(arg0, s32 *, 0x2EC) = (s32) data_020cf83c;
        var_lr                        = 1;
    }
    return var_lr;
}
