#include "m2c.h"

s32 func_020742ec(M2C_UNK);                         /* extern */
M2C_UNK func_020c3720(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020c36f8(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020742ec(0xB8);
    if (temp_r0 == 0) {
        return;
    }
    func_020c3720(temp_r0, arg0, 0);
}
