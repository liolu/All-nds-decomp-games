#include "m2c.h"

s32 func_020742ec(M2C_UNK);                         /* extern */
M2C_UNK func_020cb958(s32, M2C_UNK);                /* extern */

void func_020cb934(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020742ec(0xB4);
    if (temp_r0 == 0) {
        return;
    }
    func_020cb958(temp_r0, arg0);
}
