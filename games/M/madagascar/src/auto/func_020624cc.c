/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020623d8();                            /* extern */
s32 func_02063cf8();                                /* extern */
M2C_UNK func_02063d0c(s32);                         /* extern */

void func_020624cc(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02063cf8();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020623d8();
    func_02063d0c(temp_r4);
}
