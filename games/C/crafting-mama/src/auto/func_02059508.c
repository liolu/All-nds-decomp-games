#include "m2c.h"

M2C_UNK func_0201ec94(s32, s32);                    /* extern */
M2C_UNK func_0201f844(s32);                         /* extern */
M2C_UNK func_02059458(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02059508(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02059458(arg0, arg2, arg3);
    func_0201ec94(arg0, arg0 + arg1);
    func_0201f844(arg0);
}
