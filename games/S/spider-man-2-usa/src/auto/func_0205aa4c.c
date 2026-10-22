/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205cfd8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0205cff4(M2C_UNK);                         /* extern */
s32 func_0205d2cc(s32);                             /* extern */

void func_0205aa4c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;

    temp_r4 = func_0205d2cc(arg1);
    if (arg0 == func_0205cff4(arg2)) {
        func_0205cfd8(arg2, 0);
    }
    func_0205d2cc(temp_r4);
}
