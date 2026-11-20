#include "m2c.h"

M2C_UNK func_020462d4();                 /* extern */
s16 func_02046dac();                                /* extern */
s32 func_02053114();                         /* extern */
s32 func_020537ec();                             /* extern */

void func_0201ef38(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02053114(arg1);
    func_020537ec();
    M2C_FIELD(arg0, s16 *, 0x349C) = func_02046dac();
    func_020462d4(func_020537ec(temp_r4), arg0 + 0x349E);
}
