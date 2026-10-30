#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_0208c77c(s32);                         /* extern */
M2C_UNK func_0208c7c4();                            /* extern */

void func_02080fa4(void *arg0) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0208c7c4();
    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r4 != 0) {
        func_0208c77c(temp_r4);
        func_0203491c(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
