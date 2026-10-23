#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_ov002_0210b1c0(void *);                      /* extern */
M2C_UNK func_ov002_02104e2c(s32);                         /* extern */

void *func_ov002_02105668(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r4 != 0) {
        func_ov002_02104e2c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_ov002_0210b1c0(arg0);
    return arg0;
}
