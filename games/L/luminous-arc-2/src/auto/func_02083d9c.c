#include "m2c.h"

M2C_UNK func_0207b6e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02083ce8();                            /* extern */
s32 func_02083f6c();                                /* extern */
extern M2C_UNK data_02170334;

void func_02083d9c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_02083ce8();
    if (M2C_FIELD(&data_02170334, void **, 4) != NULL) {
        M2C_FIELD(M2C_FIELD(&data_02170334, void **, 4), s8 *, 0xC) = 1;
    }
    if (func_02083f6c() != 2) {
        return;
    }
    func_0207b6e4(arg0, arg1, arg2, arg3, arg4);
}
