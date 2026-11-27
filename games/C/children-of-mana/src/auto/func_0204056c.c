/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e0f8();                            /* extern */
M2C_UNK func_0200ffe8(s16);                         /* extern */

void func_0204056c(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r0 != 0) && (temp_r0 != 0)) {
        func_0200e0f8();
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    func_0200ffe8(M2C_FIELD(arg0, s16 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
