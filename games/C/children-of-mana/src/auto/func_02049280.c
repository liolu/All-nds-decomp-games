/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209167c(s32, s32);                    /* extern */

void func_02049280(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x148) = arg1;
    func_0209167c(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x148) * 4)), s32 *, 0x24));
}
