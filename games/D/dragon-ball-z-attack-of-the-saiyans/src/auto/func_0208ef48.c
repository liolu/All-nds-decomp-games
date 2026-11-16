#include "m2c.h"

s32 func_0208cd84(M2C_UNK);                         /* extern */
M2C_UNK func_020833ec(s32, s32, M2C_UNK);           /* extern */

s32 func_0208ef48(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                      = func_0208cd84(arg1);
    M2C_FIELD(arg0, s32 *, 0xA4) = temp_r0;
    func_020833ec(temp_r0, arg0 + 0xA8, 0x40);
    return 1;
}
