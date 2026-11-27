/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209e36c();                            /* extern */

s32 func_0209e480(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1C4);
    if (temp_r1 <= 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C4)                                         = (s32) (temp_r1 - 1);
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x1C4) * 2)), s16 *, 0x1A4) = 0;
    func_0209e36c(arg0);
    return 1;
}
