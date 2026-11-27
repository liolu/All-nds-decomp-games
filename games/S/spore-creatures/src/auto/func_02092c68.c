#include "m2c.h"

M2C_UNK func_0208f174(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0208f18c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020d8114;

void func_02092c68(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_lr;

    temp_lr = arg1 * 4;
    if (arg3 != 0) {
        func_0208f18c((M2C_UNK *) ((s8 *) &data_020d8114 + (temp_lr * 2)), arg2, 4, arg0);
        return;
    }
    func_0208f174((M2C_UNK *) ((s8 *) &data_020d8114 + (temp_lr * 2)), arg2, 4, arg0);
}
