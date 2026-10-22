/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020468f0(M2C_UNK);                     /* extern */
M2C_UNK func_02046dc8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02046e3c();                                /* extern */

void func_02046b2c(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_02046e3c() == 0) {
        return;
    }
    func_02046dc8(arg0, arg1);
    func_020468f0(arg0);
}
