/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205185c();                                /* extern */
s32 func_020519a4();                                /* extern */

s32 func_020011b4(s32 *arg0) {
    s32 temp_r4;
    s32 var_r0;

    if (func_0205185c() != 0) {
        temp_r4 = *arg0;
        if (temp_r4 == func_020519a4()) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
