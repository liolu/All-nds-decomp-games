#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_020427a0(void *);                      /* extern */
M2C_UNK func_020143f4(s32);                         /* extern */

void *func_020145b8(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r4 != 0) {
        func_020143f4(temp_r4);
        func_020934a8(temp_r4);
    }
    func_020427a0(arg0);
    return arg0;
}
