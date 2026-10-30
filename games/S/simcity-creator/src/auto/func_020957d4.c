#include "m2c.h"

M2C_UNK func_02002f9c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02003048(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020030f8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(void *, M2C_UNK);             /* extern */

void func_020957d4(void *arg0, M2C_UNK arg1) {
    func_02002f9c(M2C_FIELD(arg0, s32 *, 4), 0, 0x200);
    func_020030f8(M2C_FIELD(arg0, s32 *, 8), 0, arg1);
    func_020055c4(arg0 + 0xC, 0x400);
    func_02003048(arg0 + 0xC, 0, 0x400);
}
