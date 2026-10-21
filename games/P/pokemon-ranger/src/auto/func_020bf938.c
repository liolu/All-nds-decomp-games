/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c88d0(s32);                         /* extern */

s32 func_020bf938(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_020c88d0(M2C_FIELD(arg0, s32 *, 0xA0) + arg3);
    return arg2;
}
