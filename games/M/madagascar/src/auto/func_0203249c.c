/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02024ef4(void *);                          /* extern */
s32 func_02032260();                                /* extern */

s32 func_0203249c(void *arg0) {
    s32 temp_r0;

    if ((M2C_FIELD(arg0, u8 *, 0x134) != 0) && (func_02032260() != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x128) <= 5)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x12C) & 4;
        if (temp_r0 == 0) {
            return temp_r0;
        }
        return func_02024ef4(arg0);
    }
    return func_02024ef4(arg0);
}
