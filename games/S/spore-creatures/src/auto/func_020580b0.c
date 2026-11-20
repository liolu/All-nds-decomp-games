#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_020571ac(void *);                      /* extern */
M2C_UNK func_0209667c(s32);                         /* extern */

void *func_020580b0(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (temp_r4 != 0) {
        func_0209667c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_020571ac(arg0);
    return arg0;
}
