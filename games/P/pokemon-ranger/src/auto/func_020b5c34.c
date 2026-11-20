#include "m2c.h"

M2C_UNK func_020b60f8(void *, void *, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

s32 func_020b5c34(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    if (temp_r4 == NULL) {
        return 0;
    }
    func_020b60f8(arg0, temp_r4, arg1, arg2, arg3, arg4, arg5);
    return *M2C_FIELD(temp_r4, s32 **, 4);
}
