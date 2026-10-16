/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02042fd0();                            /* extern */
s32 func_020449c4();                                /* extern */
M2C_UNK func_020449d8(s32);                         /* extern */

void func_020430c4(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_020449c4();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02042fd0();
    func_020449d8(temp_r4);
}
