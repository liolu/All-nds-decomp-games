/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020315b8();                              /* extern */

s32 func_0203157c(void *arg0) {
    s32 var_r4;
    void *temp_r0;

    var_r4  = 0x7FFFFFFF;
    temp_r0 = func_020315b8();
    if (temp_r0 != NULL) {
        var_r4 = M2C_FIELD(temp_r0, s32 *, 0x298) - M2C_FIELD(arg0, s32 *, 0x298);
        if (var_r4 < 0) {
            var_r4 = 0 - var_r4;
        }
    }
    return var_r4;
}
