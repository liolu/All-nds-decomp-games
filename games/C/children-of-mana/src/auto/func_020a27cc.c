#include "m2c.h"

M2C_UNK func_020a5494(s32, s32, M2C_UNK);           /* extern */

void func_020a27cc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_020a5494(M2C_FIELD(arg0, s32 *, 0x10), arg1, 0);
}
