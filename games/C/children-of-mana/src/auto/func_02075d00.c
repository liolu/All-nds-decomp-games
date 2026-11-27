/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063270(s32, s32);                    /* extern */
s32 func_0206417c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020641c4(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02075d00(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_0206417c(arg2, arg3)) {
        func_020641c4(arg2, arg3, 0);
    }
    func_02063270(arg0, arg0 + arg1);
}
