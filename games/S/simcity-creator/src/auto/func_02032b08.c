#include "m2c.h"

M2C_UNK func_020074dc(s32, s32);                    /* extern */
M2C_UNK func_02032ab0(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02032b08(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02032ab0(arg0, arg2, arg3);
    func_020074dc(arg0, arg0 + arg1);
}
