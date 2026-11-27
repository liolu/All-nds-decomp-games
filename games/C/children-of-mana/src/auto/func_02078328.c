/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u8 func_02078328(void *arg0, s32 arg1) {
    u8 var_r3;

    var_r3 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x1BF) != 0) {
        var_r3 = *(s8 *) (M2C_FIELD(arg0, s32 *, 0x14) + (arg1 * 0x1A8));
    }
    return var_r3;
}