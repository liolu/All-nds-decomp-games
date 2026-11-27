#include "m2c.h"

M2C_UNK func_020934a8(s32 *);                       /* extern */
M2C_UNK func_020934bc(s32);                         /* extern */

void *func_0207aa60(void *arg0) {
    s32 *temp_r1;
    s32 *temp_r4;

    temp_r1 = M2C_FIELD(arg0, s32 **, 8);
    if (temp_r1 != NULL) {
        *temp_r1 -= 1;
        if ((s32) *M2C_FIELD(arg0, s32 **, 8) <= 0) {
            temp_r4 = M2C_FIELD(arg0, s32 **, 4);
            if (temp_r4 != NULL) {
                func_020934bc(M2C_FIELD(temp_r4, s32 *, 0));
                func_020934bc(M2C_FIELD(temp_r4, s32 *, 4));
                func_020934a8(temp_r4);
            }
            func_020934a8(M2C_FIELD(arg0, s32 **, 8));
        }
    }
    return arg0;
}
