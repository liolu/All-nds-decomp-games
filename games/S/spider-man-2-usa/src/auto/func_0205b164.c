/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02057aa0();                                /* extern */
M2C_UNK func_02057ab4(s32);                         /* extern */
M2C_UNK func_0205b704(M2C_UNK);                     /* extern */

void func_0205b164(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02057aa0();
    func_0205b704(arg1);
    func_02057ab4(temp_r4);
}
