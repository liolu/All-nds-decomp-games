#include "m2c.h"

M2C_UNK func_02014d2c();                            /* extern */
s32 func_0201732c();                                /* extern */
M2C_UNK func_02017340(s32);                         /* extern */

void func_02015334(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_0201732c();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02014d2c();
    func_02017340(temp_r4);
}
