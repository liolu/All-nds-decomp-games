/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02033f0c();                                /* extern */

s32 func_0203ca84(void *arg0, s32 arg1) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x1E8) == 7) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 0x34) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 2;
        }
        return var_r0;
    }
    return func_02033f0c(arg0, arg1);
}
