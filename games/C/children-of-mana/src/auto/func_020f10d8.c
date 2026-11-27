/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201e150(s32);                             /* extern */
s32 func_020f1190(void *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */

s32 func_020f10d8(void *arg0, s32 arg1, M2C_UNK arg2) {
    if (arg1 == 0) {
        return 1;
    }
    return func_020f1190(arg0, func_0201e150(arg1), arg2, 0, M2C_FIELD(arg0, s32 *, 0x4FC), M2C_FIELD(arg0, s32 *, 0x500));
}
