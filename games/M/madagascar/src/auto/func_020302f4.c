/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02034e28(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_020374c0(s32, M2C_UNK);                /* extern */

void func_020302f4(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02034e28(0x37, arg0 + 0x174, 0);
    if (temp_r0 == 0) {
        return;
    }
    func_020374c0(temp_r0, 0x37);
}
