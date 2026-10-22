/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02056ba8();                            /* extern */
s32 func_02057aa0();                                /* extern */
M2C_UNK func_02057ab4(s32);                         /* extern */

void func_02056c9c(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02057aa0();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02056ba8();
    func_02057ab4(temp_r4);
}
