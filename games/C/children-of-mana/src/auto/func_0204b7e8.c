/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020def60(s32, M2C_UNK);                /* extern */

void func_0204b7e8(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s8 *, 0x11E) = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 2;
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return;
    }
    func_020def60(temp_r0, 1);
}
