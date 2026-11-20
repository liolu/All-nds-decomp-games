/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020532ec(s32);                             /* extern */
M2C_UNK func_02059f70(s32);                         /* extern */

s32 func_0204aab8(s32 *arg0) {
    s32 var_r4;

    if (func_020532ec(*arg0) != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02059f70(*arg0);
    return var_r4;
}
