/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004430(s32, M2C_UNK);                /* extern */

void func_020c722c(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x19C) = arg2;
    if (arg2 == 0) {
        return;
    }
    func_02004430(arg0 + 0x1BC + (arg1 << 6), arg3);
}
