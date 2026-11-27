/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02037b1c();                                /* extern */

s32 func_02037704(void *arg0) {
    s16 var_r1;

    if (func_02037b1c() != 0) {
        var_r1 = M2C_FIELD(arg0, s16 *, 0x682);
    } else {
        var_r1 = 0;
    }
    return M2C_FIELD(arg0, s16 *, 0x680) + 0x64 + var_r1;
}
