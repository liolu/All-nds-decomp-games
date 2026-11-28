#include "m2c.h"

s32 func_020742ec(M2C_UNK);                         /* extern */
M2C_UNK func_020c6cec(s32, M2C_UNK);                /* extern */

void func_020c5380(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020742ec(0xB0);
    if (temp_r0 == 0) {
        return;
    }
    func_020c6cec(temp_r0, arg0);
}
