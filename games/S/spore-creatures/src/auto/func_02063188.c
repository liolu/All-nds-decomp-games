#include "m2c.h"

M2C_UNK func_020631bc(s32, s32);                    /* extern */
s32 func_ov001_0210024c(s32 *);                     /* extern */
M2C_UNK func_ov001_021002e8();                      /* extern */

void func_02063188(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_ov001_0210024c(&sp0);
    if (temp_r0 != 0) {
        func_ov001_021002e8();
        func_020631bc(temp_r0, sp0);
    }
    func_ov001_021002e8();
}
