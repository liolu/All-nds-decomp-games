/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02088168();                                /* extern */

s32 func_020b0550(s32 arg0, s32 arg1) {
    s32 var_r0;

    if (M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x30) != 0) {
        if (func_02088168() == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 1;
}
