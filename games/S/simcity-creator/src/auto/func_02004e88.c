#include "m2c.h"

M2C_UNK func_020048b4();                            /* extern */
s32 func_020066e0();                                /* extern */
M2C_UNK func_020066f4(s32);                         /* extern */

void func_02004e88(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_020066e0();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020048b4();
    func_020066f4(temp_r4);
}
