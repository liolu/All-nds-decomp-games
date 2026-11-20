/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02034e28(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_020374c0(s32, s32);                    /* extern */

void func_02044200(s32 arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 == 0) {
        return;
    }
    temp_r0 = func_02034e28(arg1, arg0 + 0x174, 0);
    if (temp_r0 == 0) {
        return;
    }
    func_020374c0(temp_r0, arg1);
}
