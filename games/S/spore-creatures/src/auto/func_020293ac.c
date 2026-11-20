#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_0208acbc(void *);                      /* extern */
M2C_UNK func_020291ac(s32);                         /* extern */

void *func_020293ac(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 16);
    if (temp_r4 != 0) {
        func_020291ac(temp_r4);
        func_020934a8(temp_r4);
    }
    func_0208acbc(arg0 + 4);
    return arg0;
}
