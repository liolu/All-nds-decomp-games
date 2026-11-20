#include "m2c.h"

s32 func_02070bf0(s32);                             /* extern */
M2C_UNK func_0208ccd0(s32 *, M2C_UNK, M2C_UNK);     /* extern */

s32 func_0208cdc0(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_02070bf0(*arg0);
    if ((temp_r0 != 0x16) && (temp_r0 != 0x18)) {
        return 0;
    }
    func_0208ccd0(arg0, arg1, arg2);
    return 1;
}
