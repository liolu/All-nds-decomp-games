/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_020327ec(s32);                             /* extern */

s32 func_020317cc(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 >= 0x63) {
        return 0;
    }
    if (func_020327ec(temp_r0 + 1) <= (u32) M2C_FIELD(arg0, u32 *, 0x64)) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
        return 1;
    }
    return 0;
}
