#include "m2c.h"

M2C_UNK func_020934a8(s32 *);                       /* extern */

void *func_0206e7fc(void *arg0) {
    s32 *temp_r1;
    void **temp_r0;

    temp_r1 = M2C_FIELD(arg0, s32 **, 0xF8);
    if (temp_r1 != NULL) {
        *temp_r1 -= 1;
        if ((s32) *M2C_FIELD(arg0, s32 **, 0xF8) <= 0) {
            temp_r0 = M2C_FIELD(arg0, void ***, 0xF4);
            if (temp_r0 != NULL) {
                M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
            }
            func_020934a8(M2C_FIELD(arg0, s32 **, 0xF8));
        }
    }
    return arg0;
}
