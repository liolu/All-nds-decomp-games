/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02012178(M2C_UNK, s32);                /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */

void func_020896b4(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020121b4(arg0, 0);
    func_02012178(arg0, temp_r4 + func_020121b4(arg0, 1));
}
