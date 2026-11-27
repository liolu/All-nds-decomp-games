/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209167c(s32, s32);                    /* extern */

void func_0204923c(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x24) = arg2;
    M2C_FIELD((arg0 + arg1), s8 *, 0x38)        = arg3;
    func_0209167c(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x148) * 4)), s32 *, 0x24));
}
