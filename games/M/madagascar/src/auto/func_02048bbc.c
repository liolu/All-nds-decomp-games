/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b544(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0205b560(M2C_UNK);                         /* extern */
s32 func_0205b948(s32);                             /* extern */

void func_02048bbc(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;

    temp_r4 = func_0205b948(arg1);
    if (arg0 == func_0205b560(arg2)) {
        func_0205b544(arg2, 0);
    }
    func_0205b948(temp_r4);
}
