#include "m2c.h"

M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */

void func_020310a8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2B0) = 4;
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), M2C_FIELD(arg0, s32 *, 0x1F0), 0);
}
