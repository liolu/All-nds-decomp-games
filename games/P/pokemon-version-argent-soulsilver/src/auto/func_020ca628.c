#include "m2c.h"

M2C_UNK func_020ca578(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020d5374(s32, s32);                    /* extern */
M2C_UNK func_020d62b8(s32);                         /* extern */

void func_020ca628(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020ca578(arg0, arg2, arg3);
    func_020d5374(arg0, arg0 + arg1);
    func_020d62b8(arg0);
}
