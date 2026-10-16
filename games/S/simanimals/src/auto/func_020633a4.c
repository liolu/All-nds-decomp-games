#include "m2c.h"

M2C_UNK func_02062e80();                            /* extern */
s32 func_02064a3c();                                /* extern */
M2C_UNK func_02064a50(s32);                         /* extern */

void func_020633a4(void) {
    s32 temp_r4;

    temp_r4 = func_02064a3c();
    func_02062e80();
    func_02064a50(temp_r4);
}
