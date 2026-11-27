/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d4788(void *);                      /* extern */
M2C_UNK func_020def60(s32, M2C_UNK);                /* extern */

void func_0204b7a0(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 3;
    func_020d4788(arg0 + 0x78);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0) {
        return;
    }
    func_020def60(temp_r0, 0);
}
