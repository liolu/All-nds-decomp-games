/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202c174(s32 arg0, s32 arg1, u32 arg2, u32 arg3) {
    s32 var_r0;

    var_r0 = (arg3 << 6) + (arg2 * 2);
    if (arg3 >= 0x20U) {
        var_r0 += 0x800;
    }
    if (arg2 >= 0x20U) {
        var_r0 += 0x7C0;
    }
    return var_r0;
}
