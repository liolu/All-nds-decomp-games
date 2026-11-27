/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202a6f0();                            /* extern */
M2C_UNK func_020aad14(s32, M2C_UNK);                /* extern */

void func_020aca3c(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        func_0202a6f0();
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r0 == 0) {
        return;
    }
    func_020aad14(temp_r0, arg1);
}
