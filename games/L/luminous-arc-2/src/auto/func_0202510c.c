#include "m2c.h"

M2C_UNK func_02007c50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02008244(M2C_UNK);                     /* extern */
M2C_UNK func_02008400(s32);                         /* extern */
s32 func_0200846c();                                /* extern */
M2C_UNK func_02025d30();                            /* extern */

void func_0202510c(void) {
    s32 temp_r4;

    func_02025d30();
    func_02007c50(0, 0, 0, 0);
    temp_r4 = func_0200846c();
    func_02008244(1);
    func_02008400(temp_r4);
}
