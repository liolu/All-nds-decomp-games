#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_02015718(void *);                      /* extern */
M2C_UNK func_0209667c(s32);                         /* extern */

void *func_02016050(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r4 != 0) {
        func_0209667c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_02015718(arg0);
    return arg0;
}
