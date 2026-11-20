#include "m2c.h"

M2C_UNK func_020b7c8c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020b8264(M2C_UNK);                     /* extern */
M2C_UNK func_020b8420(s32);                         /* extern */
s32 func_020b848c();                                /* extern */
M2C_UNK func_020843f4();                            /* extern */

void func_02084be4(void) {
    s32 temp_r4;

    func_020843f4();
    func_020b7c8c(0, 0, 0, 0);
    temp_r4 = func_020b848c();
    func_020b8264(1);
    func_020b8420(temp_r4);
}
