#include "m2c.h"

M2C_UNK func_0201c5d8(s32);                         /* extern */
M2C_UNK func_0203491c(s32);                         /* extern */

void func_02053168(void *arg0) {
    s32 temp_r4;
    void **temp_r0;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xBB5C);
    if (temp_r4 != 0) {
        func_0201c5d8(temp_r4);
        func_0203491c(temp_r4);
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0xBB58);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
}
