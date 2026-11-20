#include "m2c.h"

M2C_UNK func_02047ea8();                            /* extern */
M2C_UNK func_02047f7c(void *, M2C_UNK);             /* extern */

void func_02047e7c(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        func_02047ea8(arg0);
    }
    func_02047f7c(arg0, arg1);
}
