#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_02058120(void *);                      /* extern */
M2C_UNK func_0209667c(s32);                         /* extern */

void *func_ov002_020fa6fc(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_r4 != 0) {
        func_0209667c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_02058120(arg0);
    return arg0;
}
