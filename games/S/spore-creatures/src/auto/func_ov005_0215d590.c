#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_ov005_0215c21c(void *);                      /* extern */
M2C_UNK func_ov005_0215d3bc(s32);                         /* extern */

void *func_ov005_0215d590(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_r4 != 0) {
        func_ov005_0215d3bc(temp_r4);
        func_020934a8(temp_r4);
    }
    func_ov005_0215c21c(arg0);
    return arg0;
}
