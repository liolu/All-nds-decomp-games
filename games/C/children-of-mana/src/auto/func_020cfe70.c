/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cfb00(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020cfcbc();                                /* extern */

void func_020cfe70(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_020cfcbc() != -1) {
        return;
    }
    func_020cfb00(arg0, arg1, arg2);
}
