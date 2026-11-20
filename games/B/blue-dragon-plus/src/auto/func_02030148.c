#include "m2c.h"

M2C_UNK func_0203a418(s32, s32);                    /* extern */
M2C_UNK func_0203b22c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0203b260(M2C_UNK, M2C_UNK);                /* extern */

void func_02030148(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_0203b260(arg2, arg3)) {
        func_0203b22c(arg2, arg3, 0);
    }
    func_0203a418(arg0, arg0 + arg1);
}
