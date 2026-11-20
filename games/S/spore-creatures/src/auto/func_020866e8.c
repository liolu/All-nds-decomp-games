#include "m2c.h"

M2C_UNK func_020b7e24(s32, s32);                    /* extern */
M2C_UNK func_020b8a24(s32);                         /* extern */
M2C_UNK func_02086668(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020866e8(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02086668(arg0, arg2, arg3);
    func_020b7e24(arg0, arg0 + arg1);
    func_020b8a24(arg0);
}
