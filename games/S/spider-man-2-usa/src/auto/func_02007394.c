/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ff8024(void *);                          /* extern */
s32 func_01ff8084(void *);                          /* extern */
s32 func_01ff80ac(void *);                          /* extern */
M2C_UNK func_02008738(void *);                      /* extern */

void func_02007394(void *arg0) {
    s32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 0x3A4) - M2C_FIELD(arg0, s32 *, 0x298);
    if (var_r0 < 0) {
        var_r0 = 0 - var_r0;
    }
    if ((var_r0 <= 0x1F40) && (func_01ff80ac(arg0) == 0) && (func_01ff8084(arg0) == 0) && (func_01ff8024(arg0) == 0)) {
        return;
    }
    func_02008738(arg0);
}
