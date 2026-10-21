#include "m2c.h"

M2C_UNK func_02018e4c(s32, M2C_UNK, s32);           /* extern */
s32 func_020aa070(void *, M2C_UNK);                 /* extern */

void func_020a9fa4(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02018e4c(func_020aa070(arg0, arg2), arg1, M2C_FIELD(arg0, s32 *, 8));
}
