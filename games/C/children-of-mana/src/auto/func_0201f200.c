/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

s32 func_0201b7d8(s32);                             /* extern */

s32 func_0201f200(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r1;

    if (M2C_FIELD(arg0, u8 *, 0x370) == 0) {
        return 0;
    }
    if (arg2 >= 3) {
        return 0;
    }
    if (arg1 == 0) {
        return 0;
    }
    if (func_0201b7d8(arg1) == 0) {
        return 0;
    }
    var_r1 = 0;
loop_9:
    if (arg1 == M2C_FIELD((arg0 + (var_r1 * 4)), s32 *, 0x374)) {
        return 0;
    }
    var_r1 += 1;
    if (var_r1 >= 3) {
        return 1;
    }
    goto loop_9;
}
