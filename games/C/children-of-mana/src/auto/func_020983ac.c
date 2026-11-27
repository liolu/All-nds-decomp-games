/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02093b04();                            /* extern */

s32 func_020983ac(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x3C) == 0) {
        return 0;
    }
    func_02093b04(arg0, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x3C) = 3;
    M2C_FIELD(arg0, s8 *, 0x9A)  = 1;
    M2C_FIELD(arg0, s8 *, 0x96)  = 0;
    return 1;
}
