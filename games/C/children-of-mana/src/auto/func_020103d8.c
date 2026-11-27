/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02055e08(s32);                             /* extern */

s32 func_020103d8(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    return func_02055e08(((temp_r2 * temp_r2) + (M2C_FIELD(arg0, s32 *, 4) * 2)) << 0xC) >> 0xC;
}
