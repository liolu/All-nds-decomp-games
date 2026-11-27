/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02066ae8();                                /* extern */
s32 func_02066dcc();                                /* extern */

s32 func_02066b40(s32 arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 == 1) {
        var_r1 = func_02066dcc() * 0x58;
    } else {
        var_r1 = func_02066ae8() * 0x7C;
    }
    return var_r1;
}
