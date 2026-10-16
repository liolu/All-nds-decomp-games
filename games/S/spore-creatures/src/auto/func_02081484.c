#include "m2c.h"

M2C_UNK func_020b8264(M2C_UNK);                     /* extern */
M2C_UNK func_020b8420(s32);                         /* extern */
s32 func_020b848c();                                /* extern */

void func_02081484(void) {
    s32 temp_r4;

    temp_r4 = func_020b848c();
    func_020b8264(1);
    func_020b8420(temp_r4);
}
