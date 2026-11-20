/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c8cdc(s32, s32);                    /* extern */
s32 func_020c9b70(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020c9bb8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_020bea00(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_020c9b70(arg2, arg3)) {
        func_020c9bb8(arg2, arg3, 0);
    }
    func_020c8cdc(arg0, arg0 + arg1);
}
