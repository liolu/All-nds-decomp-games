/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d254c();                                /* extern */
s32 func_020d26b8();                                /* extern */

s32 func_020d26e0(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_020d254c() != 0) {
        var_r4 = func_020d26b8();
    }
    return var_r4;
}
