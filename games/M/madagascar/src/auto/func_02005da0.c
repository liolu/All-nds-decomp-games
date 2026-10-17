/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020673ac(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_02067418(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02005da0(void *arg0, M2C_UNK arg1) {
    s32 temp_r2;

    temp_r2                   = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) (temp_r2 + ((u32) (temp_r2 >> 8) >> 0x17)) >> 9);
    if (func_020673ac(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8) << 9, 0) == 0) {
        return;
    }
    func_02067418(M2C_FIELD(arg0, s32 *, 0), arg1, 0x200);
}
