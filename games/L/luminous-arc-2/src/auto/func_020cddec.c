#include "m2c.h"

M2C_UNK func_020cd7d0(s32);                         /* extern */
s32 func_020cdd14(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020cde64(M2C_UNK, s32);                /* extern */

void func_020cddec(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_020cdd14(arg1, 0);
    func_020cde64(arg0, temp_r0);
    func_020cd7d0(temp_r0);
}
