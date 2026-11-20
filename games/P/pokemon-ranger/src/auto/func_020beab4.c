/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020beb24(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020c8d08(s32, s32);                    /* extern */
M2C_UNK func_020c9e3c(s32);                         /* extern */

void func_020beab4(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020beb24(arg0, arg2, arg3);
    func_020c8d08(arg0, arg0 + arg1);
    func_020c9e3c(arg0);
}
