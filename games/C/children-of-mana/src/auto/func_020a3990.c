/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a3990(void *arg0) {
    s32 var_r4;
    void **temp_r0;

    var_r4 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x38) != 0) {
        temp_r0 = M2C_FIELD(arg0, void ***, 8);
        if (temp_r0 != NULL) {
            if (M2C_FIELD(*temp_r0, s32(**)(), 0x10)(temp_r0) != 0) {
                var_r4 = 1;
            }
        } else {
            var_r4 = 1;
        }
    }
    return var_r4;
}
