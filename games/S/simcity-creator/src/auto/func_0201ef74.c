#include "m2c.h"

M2C_UNK func_020462a0();                 /* extern */
M2C_UNK func_02046d30();                    /* extern */
s32 func_02053114();                         /* extern */
s32 func_020537ec();                             /* extern */

void func_0201ef74(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02053114(arg1);
    func_02046d30(func_020537ec(), M2C_FIELD(arg0, u16 *, 0x349C));
    func_020462a0(func_020537ec(temp_r4), arg0 + 0x349E);
}
