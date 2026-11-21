/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s8 func_02097e64(s32 arg0, s8 *arg1) {
    s8 var_r0;

    var_r0 = *arg1;
    if (((s32) var_r0 >= 0x41) && ((s32) var_r0 <= 0x5A)) {
        return (s8) (var_r0 | 0x20);
    }
    if (var_r0 == 0x2F) {
        var_r0 = 0x5C;
    }
    return var_r0;
}
