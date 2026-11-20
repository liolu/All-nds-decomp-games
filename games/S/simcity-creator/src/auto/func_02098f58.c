#include "m2c.h"

M2C_UNK func_02098f90();                            /* extern */
M2C_UNK func_020991e0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209926c(void *, M2C_UNK);             /* extern */

void func_02098f58(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0xDC) != 0) {
        return;
    }
    func_02098f90(arg0);
    func_020991e0(arg0, arg1);
    func_0209926c(arg0, arg1);
}
