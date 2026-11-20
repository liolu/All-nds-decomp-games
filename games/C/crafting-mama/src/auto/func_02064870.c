#include "m2c.h"

M2C_UNK func_0206473c(M2C_UNK, s32, s32, M2C_UNK, s32, s32, s32, s32, s32); /* extern */

void func_02064870(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    if (arg0 == NULL) {
        return;
    }
    func_0206473c(arg1, M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), s32 *, 8), arg2, arg3, arg4,
                  arg5, arg6, arg7);
}
