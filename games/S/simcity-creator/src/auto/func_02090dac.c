#include "m2c.h"

M2C_UNK func_02002eec(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */

void func_02090dac(void *arg0) {
    func_020055c4(M2C_FIELD(arg0, s32 *, 4), 0x200);
    func_02002eec(M2C_FIELD(arg0, s32 *, 4), 0, 0x200);
}
