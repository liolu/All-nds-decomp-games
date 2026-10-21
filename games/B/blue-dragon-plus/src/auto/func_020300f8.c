#include "m2c.h"

M2C_UNK func_02030048(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0203a418(s32, s32);                    /* extern */
M2C_UNK func_0203b00c(s32);                         /* extern */

void func_020300f8(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02030048(arg0, arg2, arg3);
    func_0203a418(arg0, arg0 + arg1);
    func_0203b00c(arg0);
}
