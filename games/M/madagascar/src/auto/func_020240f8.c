/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02048c78(s32, s32, s32);               /* extern */
s32 func_02079258(s32, M2C_UNK);                    /* extern */

void func_020240f8(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0) != 1) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    temp_r4                      = M2C_FIELD(arg0, s32 *, 0x30);
    func_02048c78(M2C_FIELD(arg0, s32 *, 4), temp_r4, func_02079258(M2C_FIELD(arg0, s32 *, 0x2C) - temp_r4, arg2));
}
