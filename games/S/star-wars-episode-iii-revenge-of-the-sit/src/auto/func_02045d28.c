/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020449c4();                                /* extern */
M2C_UNK func_020449d8(s32);                         /* extern */
M2C_UNK func_020463e8(M2C_UNK);                     /* extern */

void func_02045d28(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020449c4();
    func_020463e8(arg1);
    func_020449d8(temp_r4);
}
