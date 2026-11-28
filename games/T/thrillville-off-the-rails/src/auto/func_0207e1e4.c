#include "m2c.h"

M2C_UNK func_02025e6c(M2C_UNK);                     /* extern */
M2C_UNK func_02025ddc(s32);                         /* extern */
s32 func_02025d9c();                                /* extern */

void func_0207e1e4(void) {
    s32 temp_r4;

    temp_r4 = func_02025d9c();
    func_02025e6c(1);
    func_02025ddc(temp_r4);
}
